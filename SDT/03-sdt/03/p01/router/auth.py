from fastapi import Depends, HTTPException, APIRouter
from sqlalchemy.orm import Session
from pydantic import BaseModel
from models import Users
from fastapi.responses import JSONResponse
from passlib.context import CryptContext
from database import SessionLocal
from typing import Annotated, Optional
from fastapi.security import OAuth2PasswordRequestForm
from datetime import timedelta, datetime, timezone
from jose import jwt

router = APIRouter()

bcrypt_context = CryptContext(schemes=["bcrypt"], deprecated="auto")


class Register(BaseModel):
    email = str
    username = str
    first_name = str
    last_name = str
    password = str
    role = str


def authenticate_user(username, password, db):
    user = db.query(Users).filter(Users.username == username).first()

    if user is None:
        return False

    if bcrypt_context.verify(password, user.password):
        return user

    return False


def generate_access_token(username: str, user_id: int, expires_delta: timedelta):
    encode = {"sub": username, "id": user_id}
    expires = datetime.now(timezone.utc) + expires_delta
    encode.update({"exp": expires})

    return jwt.encode(encode, SECRET_KEY, algorithm=ALGORITHM)


def get_db():
    db = SessionLocal()

    try:
        yield db
    finally:
        db.close()


db_dependency = Annotated[Session, Depends(get_db)]

SECRET_KEY = "e661e2cafa43bc6bd0a971ace102c4f70bbb98d3a03274d0c71212d6c5c8550c"
ALGORITHM = "HS256"


@router.post("/register")
def register(db: db_dependency, data: Register):
    current_data = Users(
        email=data.email,
        username=data.username,
        first_name=data.first_name,
        last_name=data.last_name,
        hash_password=bcrypt_context.hash(data.password),
        is_active=True,
        role=data.role,
    )

    db.add(current_data)
    db.commit()

    return JSONResponse(
        status_code=201, content={"message": "Registration successful!"}
    )


@router.post("/login")
def register(db: db_dependency, data: Annotated[OAuth2PasswordRequestForm, Depends()]):

    user = authenticate_user(data.username, data.password, db)

    if not user:
        return JSONResponse(status_code=403, content={"message": "Unauthorized user!"})

    token = generate_access_token(user.username, user.id, timedelta(minutes=30))

    return {"access_token": token, "token_type": "bearer"}
