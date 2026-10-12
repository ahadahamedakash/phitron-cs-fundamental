from fastapi import FastAPI, Depends, Query, HTTPException
from fastapi.responses import JSONResponse
from pydantic import BaseModel, Field

from sqlalchemy.orm import Session

from typing import Annotated, Optional, Literal

from database import engine, SessionLocal

import models
from models import Movie

app = FastAPI()


class CreateMovie(BaseModel):
    title: str = Field(min_length=3, max_length=100)
    director: str = Field(min_length=3, max_length=100)
    genre: str = Field(min_length=3, max_length=100)
    duration: int = Field(gt=0, le=1000)
    rating: float = Field(gt=0, lt=5)


class UpdateMovie(BaseModel):
    title: Optional[str] = Field(default=None, min_length=3, max_length=100)
    director: Optional[str] = Field(default=None, min_length=3, max_length=100)
    genre: Optional[str] = Field(default=None, min_length=3, max_length=100)
    duration: Optional[int] = Field(default=None, gt=0, le=1000)
    rating: Optional[float] = Field(default=None, gt=0, lt=5)


models.Base.metadata.create_all(bind=engine)


def get_db():
    db = SessionLocal()

    try:
        yield db
    finally:
        db.close()


DBSession = Annotated[Session, Depends(get_db)]


@app.get("/movies")
def get_movies(db: DBSession):
    data = db.query(Movie).all()

    return data


@app.get("/movies/sort")
def get_sorted_movies(
    db: DBSession,
    sort_by: Literal["rating", "duration"] = Query(default="rating"),
    order: Literal["asc", "desc"] = Query(default="desc"),
):
    qu = getattr(Movie, sort_by)

    if order == "asc":
        qu = qu.asc()
    else:
        qu = qu.desc()

    return db.query(Movie).order_by(qu).all()


@app.post("/create_movies")
def get_movies(data: CreateMovie, db: DBSession):
    current_data = Movie(**data.model_dump())

    db.add(current_data)
    db.commit()

    return JSONResponse(status_code=201, content={"message": "Created successfully!"})


@app.get("/movies/{id}")
def get_movie_by_id(db: DBSession, id: int):
    current_data = db.query(Movie).filter(Movie.movie_id == id).first()

    if current_data is not None:
        return current_data
    else:
        raise HTTPException(status_code=404, detail="Movie not found!")


@app.patch("/movies/{id}")
def update_movie(db: DBSession, id: int, data: UpdateMovie):
    current_data = db.query(Movie).filter(Movie.movie_id == id).first()

    if current_data is None:
        raise HTTPException(status_code=404, detail="Movie not found!")

    update_data = data.model_dump(exclude_unset=True)

    for key, val in update_data.items():
        setattr(current_data, key, val)

    db.commit()

    return JSONResponse(status_code=200, content={"message": "Updated successfully!"})


@app.delete("/movies/{id}")
def delete_movie(db: DBSession, id: int):
    current_data = db.query(Movie).filter(Movie.movie_id == id).first()

    if current_data is None:
        raise HTTPException(status_code=404, detail="Movie not found!")

    db.delete(current_data)
    db.commit()

    return JSONResponse(status_code=200, content="Deleted successfully!")
