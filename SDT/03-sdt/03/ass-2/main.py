from fastapi import FastAPI, Depends
from sqlalchemy.orm import Session

from typing import Annotated

from database import SessionLocal

app = FastAPI()


def get_db():
    db = SessionLocal()

    try:
        yield db
    finally:
        db.close()


DBSession = Annotated[Session, Depends(get_db)]


@app.get("/", include_in_schema=False)
def home():
    return {"message": "Server is up and running!"}
