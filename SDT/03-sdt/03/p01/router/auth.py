from fastapi import Depends, HTTPException, APIRouter
from sqlalchemy.orm import Session
from pydantic import BaseModel
from models import Users
from fastapi.responses import JSONResponse
from passlib.context import CryptContext
from database import SessionLocal
from typing import Annotated, Optional

router = APIRouter()

bcrypt_context = CryptContext(schemes=["bcrypt"], deprecated="auto")


class Register(BaseModel):
    email = str
    username = str
    first_name = str
    last_name = str
    password = str
    role = str


def get_db():
    db = SessionLocal()

    try:
        yield db
    finally:
        db.close()


db_dependency = Annotated[Session, Depends(get_db)]


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
