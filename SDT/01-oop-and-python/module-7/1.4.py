# ============================================================
# 2. HIGHER-ORDER FUNCTION
# ============================================================
#
# A Higher-Order Function is a function that does at least
# one of these two things:
#
# 1. Takes another function as an argument
# 2. Returns another function
#
# Python functions are first-class objects.
# That means we can pass functions around like variables.
# ============================================================


# ------------------------------------------------------------
# Example 1: Passing a function as an argument
# ------------------------------------------------------------


def greet():
    print("Hello!")


def execute_function(func):

    # Calling the function received as an argument
    func()


# Passing greet function to execute_function
execute_function(greet)


# Output:
#
# Hello!


#
# IMPORTANT:
#
# execute_function(greet)
#
# Here we are passing the function itself.
#
# We are NOT writing:
#
# execute_function(greet())
#
# Because:
#
# greet
#   -> Function object
#
# greet()
#   -> Executes the function
# ============================================================


# ------------------------------------------------------------
# Example 2: Returning a function
# ------------------------------------------------------------


def outer_function():

    def inner_function():
        print("Hello from inner function.")

    # Returning the function itself
    return inner_function


# Calling outer_function()
# and storing the returned function
my_function = outer_function()


# Calling the returned function
my_function()


# Output:
#
# Hello from inner function.


#
# So:
#
# outer_function()
#       ↓
# returns inner_function
#       ↓
# my_function
#       ↓
# my_function()
# ============================================================


# ============================================================
# 3. WRAPPER FUNCTION
# ============================================================
#
# A wrapper function is a function that "wraps" another function.
#
# It is commonly used inside decorators.
#
# The wrapper can:
#
# 1. Do something before the original function
# 2. Call the original function
# 3. Do something after the original function
#
# Basic structure:
#
# def wrapper():
#     # Before
#
#     func()
#
#     # After
# ============================================================


def wrapper_example(func):

    def wrapper():

        # Code before the original function
        print("Before the function.")

        # Calling the original function
        func()

        # Code after the original function
        print("After the function.")

    return wrapper


# ------------------------------------------------------------
# Using the wrapper manually
# ------------------------------------------------------------


def say_hello():
    print("Hello!")


# Passing say_hello to wrapper_example
new_function = wrapper_example(say_hello)


# Calling the returned wrapper function
new_function()


# Output:
#
# Before the function.
# Hello!
# After the function.


#
# Here:
#
# say_hello
#     ↓
# wrapper_example()
#     ↓
# wrapper()
#     ↓
# new_function()
#
# new_function is actually the wrapper function.
# ============================================================


# ============================================================
# 4. DECORATOR
# ============================================================
#
# A Decorator is a function that takes another function,
# adds some extra behavior, and returns a new function.
#
# In simple words:
#
# Decorator = A function that modifies/extends another function.
#
#
# Basic structure:
#
# def decorator(func):
#
#     def wrapper():
#
#         # Extra work
#
#         func()
#
#         # Extra work
#
#     return wrapper
# ============================================================


def my_decorator(func):

    def wrapper():

        print("Before function.")

        # Calling the original function
        func()

        print("After function.")

    # Returning the wrapper function
    return wrapper


# ------------------------------------------------------------
# Original function
# ------------------------------------------------------------


def hello():
    print("Hello!")


# ------------------------------------------------------------
# Applying decorator manually
# ------------------------------------------------------------


hello = my_decorator(hello)


# Now hello actually refers to wrapper()
hello()


# Output:
#
# Before function.
# Hello!
# After function.


#
# IMPORTANT:
#
# Before decoration:
#
# hello
#     ↓
# original hello function
#
#
# After:
#
# hello = my_decorator(hello)
#
#
# hello
#     ↓
# wrapper function
#     ↓
# original hello()
# ============================================================


# ============================================================
# 5. @ DECORATOR SYNTAX
# ============================================================
#
# Python gives us a shorter syntax for applying decorators.
#
# Instead of:
#
# def hello():
#     print("Hello!")
#
# hello = my_decorator(hello)
#
#
# We can write:
#
# @my_decorator
# def hello():
#     print("Hello!")
#
#
# Both are equivalent.
# ============================================================


def my_decorator(func):

    def wrapper():

        print("Before function.")

        func()

        print("After function.")

    return wrapper


@my_decorator
def hello():
    print("Hello!")


hello()


# Output:
#
# Before function.
# Hello!
# After function.


# ============================================================
# 6. HOW @DECORATOR WORKS
# ============================================================
#
# This:
#
# @my_decorator
# def hello():
#     print("Hello!")
#
#
# is basically the same as:
#
#
# def hello():
#     print("Hello!")
#
# hello = my_decorator(hello)
#
#
# So @my_decorator is just a cleaner syntax.
# ============================================================


# ============================================================
# 7. DECORATOR WITH FUNCTION ARGUMENTS
# ============================================================
#
# The previous wrapper() did not take any arguments.
#
# But what if the original function takes arguments?
#
# Example:
#
# def add(a, b):
#     return a + b
#
#
# If we use a wrapper with no parameters:
#
# def wrapper():
#     func()
#
# Then:
#
# add(2, 5)
#
# will cause an error.
#
# Why?
#
# Because wrapper() cannot receive 2 and 5.
# ============================================================


# ------------------------------------------------------------
# Wrong Example
# ------------------------------------------------------------


def bad_decorator(func):

    def wrapper():

        return func()

    return wrapper


# This would cause an error:
#
# @bad_decorator
# def add(a, b):
#     return a + b
#
# add(2, 5)


# ============================================================
# 8. USING *args AND **kwargs
# ============================================================
#
# To make a decorator work with functions having different
# types and numbers of arguments, we use:
#
# *args
# **kwargs
#
#
# *args:
# Stores positional arguments.
#
# Example:
#
# add(2, 5)
#
# args = (2, 5)
#
#
# **kwargs:
# Stores keyword arguments.
#
# Example:
#
# add(a=2, b=5)
#
# kwargs = {
#     "a": 2,
#     "b": 5
# }
# ============================================================


def flexible_decorator(func):

    def wrapper(*args, **kwargs):

        print("Before function.")

        # Passing all arguments to the original function
        result = func(*args, **kwargs)

        print("After function.")

        # Returning the original result
        return result

    return wrapper


@flexible_decorator
def add(a, b):
    return a + b


print(add(2, 5))


# Output:
#
# Before function.
# After function.
# 7


# ============================================================
# 9. WHY DO WE NEED *args AND **kwargs?
# ============================================================
#
# Because a decorator should ideally work with different
# types of functions.
#
# Example:
#
# def greet(name):
#     ...
#
# def add(a, b):
#     ...
#
# def introduce(name, age, city):
#     ...
#
#
# One decorator can handle all of them:
#
# def wrapper(*args, **kwargs):
#
#     ...
#
#
# This makes the decorator flexible.
# ============================================================


def log_decorator(func):

    def wrapper(*args, **kwargs):

        print("Function is starting...")

        result = func(*args, **kwargs)

        print("Function is finished.")

        return result

    return wrapper


@log_decorator
def greet(name):
    print(f"Hello {name}!")


@log_decorator
def multiply(a, b):
    return a * b


greet("Rahim")

print(multiply(4, 5))


# ============================================================
# 10. RETURNING THE ORIGINAL FUNCTION'S RESULT
# ============================================================
#
# This is VERY IMPORTANT.
#
# Suppose:
#
# def add(a, b):
#     return a + b
#
#
# If the wrapper does this:
#
# def wrapper(*args, **kwargs):
#     func(*args, **kwargs)
#
#
# The result will be lost.
#
# We should do:
#
# result = func(*args, **kwargs)
# return result
#
#
# Or simply:
#
# return func(*args, **kwargs)
# ============================================================


# ------------------------------------------------------------
# Wrong
# ------------------------------------------------------------


def wrong_decorator(func):

    def wrapper(*args, **kwargs):

        # Function is called,
        # but its result is not returned.
        func(*args, **kwargs)

    return wrapper


# ------------------------------------------------------------
# Correct
# ------------------------------------------------------------


def correct_decorator(func):

    def wrapper(*args, **kwargs):

        # Store the result
        result = func(*args, **kwargs)

        # Return the result
        return result

    return wrapper


@correct_decorator
def add(a, b):
    return a + b


print(add(10, 20))


# Output:
#
# 30


# ============================================================
# 11. REAL-WORLD EXAMPLE: TIMER DECORATOR
# ============================================================
#
# A decorator can be used to measure how long a function
# takes to execute.
# ============================================================


import time


def timer(func):

    def wrapper(*args, **kwargs):

        # Record starting time
        start_time = time.time()

        # Execute original function
        result = func(*args, **kwargs)

        # Record ending time
        end_time = time.time()

        # Calculate execution time
        execution_time = end_time - start_time

        print(f"{func.__name__} took " f"{execution_time:.5f} seconds")

        return result

    return wrapper


@timer
def slow_function():

    time.sleep(2)

    return "Done"


print(slow_function())


# ============================================================
# 12. REAL-WORLD EXAMPLE: LOGIN CHECK
# ============================================================
#
# Decorators are commonly used for authentication and
# permission checking.
# ============================================================


is_logged_in = True


def login_required(func):

    def wrapper(*args, **kwargs):

        if not is_logged_in:

            print("Please login first.")

            return

        # User is logged in,
        # so execute the original function.
        return func(*args, **kwargs)

    return wrapper


@login_required
def dashboard():

    print("Welcome to dashboard!")


dashboard()


# If:
#
# is_logged_in = False
#
# then:
#
# Please login first.
#
# will be printed.
# ============================================================


# ============================================================
# 13. REAL-WORLD EXAMPLE: VALIDATION
# ============================================================
#
# Decorators can validate input before executing a function.
# ============================================================


def positive_number(func):

    def wrapper(number):

        if number < 0:

            print("Number must be positive.")

            return

        return func(number)

    return wrapper


@positive_number
def square(number):

    return number * number


print(square(5))

square(-5)


# Output:
#
# 25
# Number must be positive.
# ============================================================


# ============================================================
# 14. functools.wraps
# ============================================================
#
# When we decorate a function, the function's metadata can
# become the metadata of the wrapper.
#
# Example:
#
# @decorator
# def add():
#     ...
#
# add.__name__
#
# Without wraps(), this may show:
#
# wrapper
#
# instead of:
#
# add
#
#
# To solve this, Python provides:
#
# from functools import wraps
# ============================================================


from functools import wraps


def my_decorator(func):

    @wraps(func)
    def wrapper(*args, **kwargs):

        return func(*args, **kwargs)

    return wrapper


@my_decorator
def add(a, b):
    """This function adds two numbers."""

    return a + b


print(add.__name__)

print(add.__doc__)


# Output:
#
# add
# This function adds two numbers.


# ============================================================
# 15. MULTIPLE DECORATORS
# ============================================================
#
# We can apply more than one decorator to the same function.
#
# Example:
#
# @decorator_one
# @decorator_two
# def hello():
#     ...
#
#
# The decorator closest to the function is applied first.
# ============================================================


def decorator_one(func):

    @wraps(func)
    def wrapper(*args, **kwargs):

        print("Decorator One - Before")

        result = func(*args, **kwargs)

        print("Decorator One - After")

        return result

    return wrapper


def decorator_two(func):

    @wraps(func)
    def wrapper(*args, **kwargs):

        print("Decorator Two - Before")

        result = func(*args, **kwargs)

        print("Decorator Two - After")

        return result

    return wrapper


@decorator_one
@decorator_two
def hello():

    print("Hello!")


hello()


# Output:
#
# Decorator One - Before
# Decorator Two - Before
# Hello!
# Decorator Two - After
# Decorator One - After


#
# Internally this is:
#
# hello = decorator_one(
#             decorator_two(hello)
#         )
# ============================================================


# ============================================================
# 16. DECORATOR WITH ARGUMENTS
# ============================================================
#
# Sometimes we want to configure a decorator.
#
# Example:
#
# @repeat(3)
#
# This means:
#
# "Run this function 3 times."
#
#
# Here we need THREE levels:
#
# repeat()
#     ↓
# decorator()
#     ↓
# wrapper()
# ============================================================


def repeat(times):

    # This function receives the decorator argument.
    def decorator(func):

        # This function receives the function.
        def wrapper(*args, **kwargs):

            # Run the function 'times' number of times.
            for _ in range(times):

                func(*args, **kwargs)

        return wrapper

    return decorator


@repeat(3)
def say_hello():

    print("Hello!")


say_hello()


# Output:
#
# Hello!
# Hello!
# Hello!


# ============================================================
# 17. UNDERSTANDING @repeat(3)
# ============================================================
#
# This:
#
# @repeat(3)
# def say_hello():
#     ...
#
#
# can be understood as:
#
#
# decorator = repeat(3)
#
# say_hello = decorator(say_hello)
#
#
# So:
#
# repeat(3)
#     ↓
# returns decorator
#     ↓
# decorator(say_hello)
#     ↓
# returns wrapper
# ============================================================


# ============================================================
# 18. CLASS DECORATOR
# ============================================================
#
# Decorators can also be applied to classes.
#
# A class decorator receives a class as an argument.
# ============================================================


def add_category(cls):

    # Adding a new class attribute
    cls.category = "Human"

    # Returning the modified class
    return cls


@add_category
class Person:

    def __init__(self, name):

        self.name = name


person = Person("Rahim")

print(person.name)

print(person.category)


# Output:
#
# Rahim
# Human
# ============================================================


# ============================================================
# 19. BUILT-IN DECORATORS
# ============================================================
#
# Python already provides several useful decorators.
#
# Common examples:
#
# 1. @property
# 2. @staticmethod
# 3. @classmethod
#
# Third-party frameworks also use decorators heavily.
# ============================================================


# ============================================================
# 20. @staticmethod
# ============================================================
#
# A static method does not receive:
#
# self
#
# or:
#
# cls
#
# automatically.
# ============================================================


class Calculator:

    @staticmethod
    def add(a, b):

        return a + b


print(Calculator.add(10, 20))


# Output:
#
# 30
# ============================================================


# ============================================================
# 21. @classmethod
# ============================================================
#
# A class method receives the class itself as:
#
# cls
# ============================================================


class Person:

    country = "Bangladesh"

    @classmethod
    def show_country(cls):

        print(cls.country)


Person.show_country()


# Output:
#
# Bangladesh
# ============================================================


# ============================================================
# 22. @property
# ============================================================
#
# @property allows us to access a method like an attribute.
# ============================================================


class Student:

    def __init__(self, name):

        self._name = name

    @property
    def name(self):

        return self._name


student = Student("Rahim")

# We use:
#
# student.name
#
# instead of:
#
# student.name()
#
print(student.name)


# ============================================================
# 23. DECORATOR FLOW
# ============================================================
#
# The most important thing to understand:
#
#
# @decorator
# def function():
#     ...
#
#
# is equivalent to:
#
#
# def function():
#     ...
#
# function = decorator(function)
#
#
# Then:
#
# function()
#
# actually calls the wrapper returned by the decorator.
#
#
# Flow:
#
# function()
#     ↓
# wrapper()
#     ↓
# Extra code BEFORE
#     ↓
# Original function()
#     ↓
# Extra code AFTER
#     ↓
# return result
# ============================================================


# ============================================================
# 24. INNER FUNCTION vs WRAPPER vs DECORATOR
# ============================================================
#
#
# INNER FUNCTION:
#
# A function defined inside another function.
#
#
# def outer():
#
#     def inner():
#         ...
#
#
# ------------------------------------------------------------
#
#
# WRAPPER FUNCTION:
#
# A function that wraps another function and usually calls it.
#
#
# def decorator(func):
#
#     def wrapper():
#
#         func()
#
#
# ------------------------------------------------------------
#
#
# DECORATOR:
#
# A function that receives another function and returns a
# modified/wrapped function.
#
#
# def decorator(func):
#
#     def wrapper():
#
#         func()
#
#     return wrapper
#
#
# ------------------------------------------------------------
#
#
# HIGHER-ORDER FUNCTION:
#
# A function that takes another function as an argument
# OR returns another function.
#
# ============================================================


# ============================================================
# 25. VERY IMPORTANT CONCEPT
# ============================================================
#
# Not every inner function is a wrapper.
#
# Example:
#
#
# def outer():
#
#     def inner():
#         print("Hello")
#
#     inner()
#
#
# Here inner() is an inner function.
#
# But it is NOT really wrapping another function.
#
#
# A wrapper usually has a function like:
#
#     func
#
# and calls that function:
#
#     func()
#
#
# So:
#
# Inner Function
#     ↓
# Function inside another function
#
#
# Wrapper Function
#     ↓
# Function that wraps another function
#
#
# Decorator
#     ↓
# Function that creates/returns the wrapper
# ============================================================


# ============================================================
# 26. COMPLETE DECORATOR TEMPLATE
# ============================================================
#
# This is the most useful template to remember:
# ============================================================


def decorator(func):

    @wraps(func)
    def wrapper(*args, **kwargs):

        # ----------------------------------------
        # BEFORE
        # ----------------------------------------

        print("Before function.")

        # ----------------------------------------
        # ORIGINAL FUNCTION
        # ----------------------------------------

        result = func(*args, **kwargs)

        # ----------------------------------------
        # AFTER
        # ----------------------------------------

        print("After function.")

        # ----------------------------------------
        # RETURN RESULT
        # ----------------------------------------

        return result

    return wrapper


@decorator
def example(a, b):

    return a + b


print(example(10, 20))


# ============================================================
# 27. DECORATOR CHECKLIST
# ============================================================
#
# যখন decorator লিখবে, এই জিনিসগুলো মনে রাখবে:
#
#
# 1. Original function receive করো:
#
#       def decorator(func):
#
#
# 2. Wrapper তৈরি করো:
#
#       def wrapper(*args, **kwargs):
#
#
# 3. Original function call করো:
#
#       result = func(*args, **kwargs)
#
#
# 4. Result return করো:
#
#       return result
#
#
# 5. Wrapper return করো:
#
#       return wrapper
#
#
# 6. Metadata preserve করতে:
#
#       @wraps(func)
#
# ব্যবহার করো।
# ============================================================


# ============================================================
# 28. COMMON MISTAKES
# ============================================================
#
#
# Mistake 1:
#
#     def wrapper():
#
# যখন original function arguments নেয়।
#
# Solution:
#
#     def wrapper(*args, **kwargs):
#
#
# ------------------------------------------------------------
#
#
# Mistake 2:
#
# Result return না করা।
#
# Wrong:
#
#     func(*args, **kwargs)
#
#
# Correct:
#
#     return func(*args, **kwargs)
#
#
# ------------------------------------------------------------
#
#
# Mistake 3:
#
# Function-এর জায়গায় function call পাঠানো।
#
# Wrong:
#
#     decorator(func())
#
#
# Correct:
#
#     decorator(func)
#
#
# ------------------------------------------------------------
#
#
# Mistake 4:
#
# @decorator কী করে সেটা না বোঝা।
#
# Remember:
#
#     @decorator
#
# means:
#
#     function = decorator(function)
# ============================================================


# ============================================================
# 29. REAL-WORLD USE CASES OF DECORATORS
# ============================================================
#
# Decorators are commonly used for:
#
# 1. Logging
# 2. Authentication
# 3. Authorization
# 4. Timing
# 5. Validation
# 6. Caching
# 7. Retry logic
# 8. Permission checking
# 9. Debugging
# 10. Rate limiting
#
#
# Web frameworks like:
#
# Flask
# Django
# FastAPI
#
# also use decorators heavily.
# ============================================================


# ============================================================
# 30. FINAL SUMMARY
# ============================================================
#
# INNER FUNCTION:
#
#     Function inside another function.
#
#
# HIGHER-ORDER FUNCTION:
#
#     Function that takes another function as argument
#     OR returns another function.
#
#
# WRAPPER FUNCTION:
#
#     Function that wraps another function.
#
#
# DECORATOR:
#
#     Function that takes another function and returns
#     a modified/wrapped function.
#
#
# @decorator:
#
#     Shortcut for:
#
#     function = decorator(function)
#
#
# *args:
#
#     Handles positional arguments.
#
#
# **kwargs:
#
#     Handles keyword arguments.
#
#
# @wraps(func):
#
#     Preserves original function metadata.
#
#
# MOST IMPORTANT PATTERN:
#
#
# def decorator(func):
#
#     @wraps(func)
#     def wrapper(*args, **kwargs):
#
#         # Before
#
#         result = func(*args, **kwargs)
#
#         # After
#
#         return result
#
#     return wrapper
