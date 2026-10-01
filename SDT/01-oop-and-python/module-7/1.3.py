# ============================================================
# INNER FUNCTION, WRAPPER FUNCTION, HIGHER-ORDER FUNCTION
# AND DECORATOR IN PYTHON
# ============================================================
#
# In this file we will learn:
#
# 1. Inner Function
# 2. Higher-Order Function
# 3. Wrapper Function
# 4. Decorator
#
# These concepts are closely related to each other.
# ============================================================


# ============================================================
# 1. INNER FUNCTION
# ============================================================
#
# An inner function is a function defined inside another function.
#
# Example:
#
# def outer():
#     def inner():
#         ...
#
# Here, inner() is an inner/nested function.
# ============================================================


def outer():

    print("This is the outer function.")

    # Inner Function
    def inner():
        print("This is the inner function.")

    # Calling the inner function
    inner()


# Calling outer function
outer()


# ============================================================
# 2. HIGHER-ORDER FUNCTION
# ============================================================
#
# A Higher-Order Function is a function that:
#
# 1. Takes another function as an argument
#       OR
#
# 2. Returns another function
#
# Python treats functions as objects, so we can pass functions
# around like other values.
# ============================================================


# Normal function
def greet():
    print("Hello, Rahim!")


# Higher-Order Function
# This function receives another function as an argument.
def execute_function(func):

    print("Executing function...")

    # Calling the received function
    func()


# Passing greet function as an argument
execute_function(greet)


# ============================================================
# 3. FUNCTION THAT RETURNS ANOTHER FUNCTION
# ============================================================
#
# A function can also return another function.
# This is another example of a Higher-Order Function.
# ============================================================


def create_message():

    # Inner function
    def message():
        print("Hello from the returned function!")

    # Return the function
    return message


# Store the returned function
new_function = create_message()


# Call the returned function
new_function()


# ============================================================
# 4. WRAPPER FUNCTION
# ============================================================
#
# A wrapper function is used to wrap another function.
#
# It can perform some work:
#
#     BEFORE the original function
#
#     call the original function
#
#     AFTER the original function
#
# ============================================================


def wrapper(func):

    # Inner function
    def inner():

        print("Before executing the function.")

        # Call the original function
        func()

        print("After executing the function.")

    # Return the wrapper/inner function
    return inner


# Original function
def say_hello():
    print("Hello!")


# Wrap the function
new_function = wrapper(say_hello)


# Call the wrapped function
new_function()


# ============================================================
# 5. DECORATOR
# ============================================================
#
# A decorator is a special way to modify or extend the behavior
# of a function without changing the original function's code.
#
# A decorator commonly uses:
#
#     Higher-Order Function
#           +
#     Inner/Wrapper Function
#
# ============================================================


def my_decorator(func):

    # Wrapper function
    def wrapper():

        print("----- START -----")

        # Call original function
        func()

        print("------ END ------")

    # Return wrapper
    return wrapper


# ============================================================
# USING @ DECORATOR SYNTAX
# ============================================================


@my_decorator
def welcome():
    print("Welcome to Python!")


# Calling welcome()
welcome()


# ============================================================
# WHAT HAPPENS BEHIND THE SCENES?
# ============================================================
#
# When Python sees:
#
# @my_decorator
# def welcome():
#     print("Welcome to Python!")
#
# Python essentially does:
#
# welcome = my_decorator(welcome)
#
# So the original welcome function is passed to
# my_decorator().
#
# my_decorator() returns the wrapper function.
#
# Therefore, when we call:
#
# welcome()
#
# Python actually calls the wrapper function.
#
#
# FLOW:
#
#
#       welcome()
#          |
#          v
#     wrapper()
#          |
#          +----> print("START")
#          |
#          +----> original welcome()
#          |          |
#          |          v
#          |       "Welcome..."
#          |
#          +----> print("END")
#
# ============================================================


# ============================================================
# 6. DECORATOR WITH ARGUMENTS
# ============================================================
#
# What if the original function has parameters?
#
# We can use *args and **kwargs in the wrapper.
# ============================================================


def logging_decorator(func):

    def wrapper(*args, **kwargs):

        print("Function is starting...")

        # Pass arguments to the original function
        result = func(*args, **kwargs)

        print("Function is finished.")

        return result

    return wrapper


@logging_decorator
def add(a, b):

    return a + b


# Calling decorated function
result = add(10, 20)

print("Result:", result)


# ============================================================
# COMPLETE CONCEPT FLOW
# ============================================================
#
#
# INNER FUNCTION
#       |
#       v
# Function inside another function
#
#
# HIGHER-ORDER FUNCTION
#       |
#       v
# Takes function as argument
# OR
# Returns a function
#
#
# WRAPPER FUNCTION
#       |
#       v
# Wraps another function
#       |
#       +--> Before
#       |
#       +--> Original Function
#       |
#       +--> After
#
#
# DECORATOR
#       |
#       v
# Uses this pattern to modify/extend
# the behavior of another function.
#
#
# @decorator
#       |
#       v
# function()
#
# is approximately:
#
# function = decorator(function)
#
# ============================================================


# ============================================================
# QUICK SUMMARY
# ============================================================
#
# Inner Function:
#     Function inside another function.
#
# Higher-Order Function:
#     Takes a function as an argument OR returns a function.
#
# Wrapper Function:
#     A function that wraps another function and adds behavior.
#
# Decorator:
#     A convenient Python feature for applying wrapper behavior
#     to a function using @decorator syntax.
#
# ============================================================
