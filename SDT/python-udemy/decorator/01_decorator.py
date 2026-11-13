from functools import wraps


def my_decorator(func):
    @wraps(func)  # preserves metadata
    def wrapper():
        print("before")
        func()
        print("after")

    return wrapper


@my_decorator
def greet():
    print("Welcome")


greet()
print(greet.__name__)
