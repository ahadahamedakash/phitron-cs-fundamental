from fastapi import Depends, HTTPException, APIRouter
from sqlalchemy.orm import Session
from pydantic import BaseModel, Field
from models import Users
from fastapi.responses import JSONResponse
from passlib.context import CryptContext
from database import SessionLocal
from typing import Annotated, Optional
from fastapi.security import OAuth2PasswordRequestForm, OAuth2PasswordBearer
from datetime import timedelta, datetime, timezone
from jose import jwt

router = APIRouter()

bcrypt_context = CryptContext(schemes=["bcrypt"], deprecated="auto")
oauth2_bearer = OAuth2PasswordBearer(tokenUrl="login")

SECRET_KEY = "e661e2cafa43bc6bd0a971ace102c4f70bbb98d3a03274d0c71212d6c5c8550c"
ALGORITHM = "HS256"


class Register(BaseModel):
    email: str
    username: str
    first_name: str
    last_name: str
    password: str
    role: str
    phone: str


class UpdateUser(BaseModel):
    email: Optional[str] = Field(default=None)
    username: Optional[str] = Field(default=None)
    firstname: Optional[str] = Field(default=None)
    lastname: Optional[str] = Field(default=None)


class UpdatePassword(BaseModel):
    current_password: str
    new_password: str


def authenticate_user(username, password, db):
    user = db.query(Users).filter(Users.username == username).first()

    if user is None:
        return False

    if bcrypt_context.verify(password, user.password):
        return user

    return False


def generate_access_token(
    username: str, user_id: int, role: str, expires_delta: timedelta
):
    encode = {"sub": username, "id": user_id, "role": role}

    expires = datetime.now(timezone.utc) + expires_delta

    encode.update({"exp": expires})

    return jwt.encode(encode, SECRET_KEY, algorithm=ALGORITHM)


def get_current_user(token: Annotated[str, Depends(oauth2_bearer)]):
    try:
        payload = jwt.decode(token, SECRET_KEY, algorithms=[ALGORITHM])

        username: str = payload.get("sub")
        user_id: int = payload.get("id")
        role: str = payload.get("role")

        if username is None or user_id is None:
            raise HTTPException(status_code=404, detail="User not found!")

        return {"username": username, "id": user_id, "role": role}
    except:
        raise HTTPException(status_code=404, detail="User not found!")


def get_db():
    db = SessionLocal()

    try:
        yield db
    finally:
        db.close()


DBSession = Annotated[Session, Depends(get_db)]
UserSession = Annotated[dict, Depends(get_current_user)]


@router.post("/register")
def register(db: DBSession, data: Register):
    current_data = Users(
        email=data.email,
        username=data.username,
        first_name=data.first_name,
        last_name=data.last_name,
        hash_password=bcrypt_context.hash(data.password),
        is_active=True,
        role=data.role,
        phone=data.phone,
    )

    db.add(current_data)
    db.commit()

    return JSONResponse(
        status_code=201, content={"message": "Registration successful!"}
    )


@router.post("/login")
def register(db: DBSession, data: Annotated[OAuth2PasswordRequestForm, Depends()]):

    user = authenticate_user(data.username, data.password, db)

    if not user:
        return JSONResponse(status_code=403, content={"message": "Unauthorized user!"})

    token = generate_access_token(
        user.username, user.id, user.role, timedelta(minutes=30)
    )

    return {"access_token": token, "token_type": "bearer"}


@router.put("/edituser")
def update_user(user: UserSession, db: DBSession, update_user: UpdateUser):

    if user is None:
        raise HTTPException(status_code=401, detail="Failed Authentication")

    user = db.query(Users).filter(Users.id == user.get("id")).first()

    update_data = update_user.model_dump(exclude_unset=True)

    for key, value in update_data.items():
        setattr(user, key, value)

    db.commit()
    return JSONResponse(
        status_code=200, content={"message": "User updated successfully"}
    )


@router.put("/passwordchange")
def update_password(user: UserSession, db: DBSession, update_password: UpdatePassword):

    if user is None:
        raise HTTPException(status_code=401, detail="Failed Authentication")

    user = db.query(Users).filter(Users.id == user.get("id")).first()

    if not bcrypt_context.verify(update_password.current_password, user.hash_password):
        raise HTTPException(status_code=401, detail="Wrong Password")

    user.hash_password = bcrypt_context.hash(update_password.new_password)

    db.add(user)
    db.commit()
    return JSONResponse(
        status_code=200, content={"message": "Password updated successfully"}
    )


@router.get("/user")
def get_user_details(user: UserSession, db: DBSession):
    if user is None:
        raise HTTPException(status_code=401, detail="Failed Authentication")

    current_user = db.query(Users).filter(Users.id == user.get("id")).first()
    if current_user is None:
        raise HTTPException(status_code=404, detail="User not found")

    return {
        "id": current_user.id,
        "email": current_user.email,
        "username": current_user.username,
        "firstname": current_user.firstname,
        "lastname": current_user.lastname,
        "role": current_user.role,
        "is_active": current_user.is_active,
    }
