from fastapi import FastAPI, Depends, HTTPException, Query
from fastapi.responses import JSONResponse

from sqlalchemy.orm import Session

import models
from models import Books, Users
from typing import Annotated, Optional
from database import engine, SessionLocal
from router import auth, admin
from router.auth import get_current_user

app = FastAPI()

models.Base.metadata.create_all(bind=engine)
app.include_router(auth.router)
app.include_router(admin.router)


def get_db():
    db = SessionLocal()

    try:
        yield db
    finally:
        db.close()


DBSession = Annotated[Session, Depends(get_db)]
UserSession = Annotated[dict, Depends(get_current_user)]


@app.get("/books/all")
def get_all_books(user: UserSession, db: DBSession):
    if user is None:
        raise HTTPException(status_code=401, detail="Failed authentication")

    return db.query(Books).all()


@app.get("/books/{book_id}")
def get_specific_book(user: UserSession, db: DBSession, book_id: int):
    if user is None:
        raise HTTPException(status_code=401, detail="Failed authentication")

    book = db.query(Books).filter(Books.id == book_id).first()

    if book is None:
        raise HTTPException(status_code=404, detail="No book found!")

    return book
