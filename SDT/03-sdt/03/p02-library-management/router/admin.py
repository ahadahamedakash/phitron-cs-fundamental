from fastapi import Depends, HTTPException, APIRouter
from sqlalchemy.orm import Session
from pydantic import BaseModel
from models import Users
from fastapi.responses import JSONResponse
from passlib.context import CryptContext
from database import SessionLocal
from typing import Annotated, Optional
from fastapi.security import OAuth2PasswordRequestForm, OAuth2PasswordBearer
from datetime import timedelta, datetime, timezone
from jose import jwt

router = APIRouter()
