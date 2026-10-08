from fastapi import FastAPI, Depends, HTTPException
from sqlalchemy.orm import Session
from pydantic import BaseModel, Field
import models
from models import Todos
from database import engine, SessionLocal
from typing import Annotated, Optional
from fastapi.responses import JSONResponse
from router import auth

app = FastAPI()


class CreateTodo(BaseModel):
    title: str = Field(max_length=100, min_length=2)
    description: str = Field(max_length=200, min_length=5)
    priority: int = Field(gt=0, lt=6)
    completed: bool


class UpdateTodo(BaseModel):
    title: Optional[str] = Field(default=None, max_length=100, min_length=2)
    description: Optional[str] = Field(default=None, max_length=200, min_length=5)
    priority: Optional[int] = Field(default=None, gt=0, lt=6)
    completed: Optional[bool] = None


models.Base.metadata.create_all(bind=engine)
app.include_router(auth.router)


def get_db():
    db = SessionLocal()

    try:
        yield db
    finally:
        db.close()


db_dependency = Annotated[Session, Depends(get_db)]


@app.get("/")
def read_todos(db: db_dependency):
    return db.query(Todos).all()


@app.get("/todos/{id}")
def read_todos_by_id(db: db_dependency, id: int):
    current_data = db.query(Todos).filter(Todos.id == id).first()

    if current_data is not None:
        return current_data
    else:
        raise HTTPException(status_code=404, detail="No data found!")


@app.post("/todos")
def create_todos(db: db_dependency, data: CreateTodo):
    current_data = Todos(**data.model_dump())

    db.add(current_data)
    db.commit()
    db.refresh(current_data)

    return JSONResponse(status_code=201, content={"message": "Created successfully!"})


@app.patch("/todos/{id}")
def update_todos(db: db_dependency, id: int, data: UpdateTodo):
    current_data = db.query(Todos).filter(Todos.id == id).first()

    if current_data is None:
        raise HTTPException(status_code=404, detail="No data found!")

    updated_data = data.model_dump(exclude_unset=True)

    for key, val in updated_data.items():
        setattr(current_data, key, val)

    db.commit()

    return JSONResponse(status_code=200, content={"message": "Updated successfully!"})


@app.delete("/todos/{id}")
def delete_todos(db: db_dependency, id: int):
    current_data = db.query(Todos).filter(Todos.id == id).first()

    if current_data is None:
        raise HTTPException(status_code=404, detail="No data found!")

    # db.query(Todos).filter(Todos.id == id).delete()

    db.delete(current_data)
    db.commit()

    return JSONResponse(status_code=200, content={"message": "Deleted successfully!"})
