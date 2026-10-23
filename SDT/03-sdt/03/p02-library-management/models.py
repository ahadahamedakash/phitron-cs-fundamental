from database import Base
from datetime import datetime
from sqlalchemy import Column, Integer, String, Boolean, Float, DateTime


class Users(Base):

    __tablename__ = "users"

    id = Column(Integer, primary_key=True, index=True)
    email = Column(String, unique=True)
    username = Column(String, unique=True)
    firstname = Column(String)
    lastname = Column(String)
    hash_password = Column(String)
    is_active = Column(Boolean, default=True)
    role = Column(String)


class Books(Base):

    __tablename__ = "books"

    id = Column(Integer, primary_key=True, index=True)
    title = Column(String)
    author = Column(String)
    category = Column(String)
    description = Column(String)
    price = Column(Float, default=0.0)
    total_copies = Column(Integer, default=0)
    available_copies = Column(Integer, default=0)
    cover_image = Column(String, nullable=True)
    created_at = Column(DateTime, default=datetime.now)
