from fastapi import FastAPI, Depends, HTTPException
from fastapi.responses import JSONResponse

from sqlalchemy.orm import Session

import models
from models import Books, Reservations, IssueRecords
from typing import Annotated
from database import engine, SessionLocal
from router import auth, admin
from router.auth import get_current_user

from fastapi.middleware.cors import CORSMiddleware

app = FastAPI()

origins = ["*"]

app.add_middleware(
    CORSMiddleware,
    allow_origins=origins,
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)

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


@app.post("/reservation/{book_id}")
def reserve_book(user: UserSession, db: DBSession, book_id: int):
    if user is None:
        raise HTTPException(status_code=401, detail="Failed authentication")

    book = db.query(Books).filter(Books.id == book_id).first()

    if book is None:
        raise HTTPException(status_code=404, detail="Book not found!")

    reservation_model = Reservations(
        book_id=book_id, user_id=user.get("id"), status="pending"
    )

    db.add(reservation_model)
    db.commit()

    return JSONResponse(status_code=201, content={"message": "Reservation successful!"})


@app.delete("/reserve/cancel/{reservation_id}")
def cancel_reservation(user: UserSession, db: DBSession, reservation_id: int):
    if user is None:
        raise HTTPException(status_code=401, detail="Failed Authentication")

    reservation = (
        db.query(Reservations).filter(Reservations.id == reservation_id).first()
    )

    if reservation is None:
        raise HTTPException(status_code=404, detail="Reservation not found")

    db.delete(reservation)
    db.commit()

    return JSONResponse(
        status_code=200, content={"message": "Reservation cancelled successfully"}
    )


@app.get("/reserve/my")
def my_reservation(user: UserSession, db: DBSession):
    if user is None:
        raise HTTPException(status_code=401, detail="Failed Authentication")

    reservations = (
        db.query(Reservations)
        .filter(
            Reservations.user_id == user.get("id"), Reservations.status != "cancelled"
        )
        .all()
    )

    return reservations


@app.get("/issues/my")
def my_issued_books(user: UserSession, db: DBSession):
    if user is None:
        raise HTTPException(status_code=401, detail="Failed Authentication")

    issues = (
        db.query(IssueRecords)
        .filter(IssueRecords.user_id == user.get("id"), IssueRecords.status == "issued")
        .all()
    )

    return issues
