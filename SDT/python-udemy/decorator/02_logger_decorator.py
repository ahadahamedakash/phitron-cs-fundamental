from functools import wraps


def logger(func):

    @wraps(func)
    def wrapper(*args, **kwargs):
        print(f"Executing: {func.__name__}")

        return func(*args, **kwargs)

    return wrapper


@logger
def calculate_total(a, b):
    """Calculate sum of two numbers."""
    return a + b


@logger
def multiply(a, b):
    """Multiplication of two numbers."""
    return a * b


print(calculate_total(10, 20))
print(multiply(10, 20))

print(calculate_total.__name__)
print(multiply.__name__)

print(calculate_total.__doc__)
print(multiply.__doc__)

print(calculate_total.__closure__)
print(multiply.__closure__)

print(calculate_total.__wrapped__)
print(multiply.__wrapped__)
