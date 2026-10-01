# ============================================================
# TRY / EXCEPT — ERROR HANDLING
# ============================================================
#
# try / except is used to handle errors (exceptions)
# without crashing the entire program.
#
# Basic syntax:
#
# try:
#     # code that may cause an error
#
# except:
#     # code to run if an error happens
#
# ============================================================


# ============================================================
# 1. BASIC TRY / EXCEPT
# ============================================================

try:
    x = 10 / 0
except:
    print("An error occurred")

# Output:
# An error occurred


# Without try/except:
#
# x = 10 / 0
#
# The program would stop with:
# ZeroDivisionError


# ============================================================
# 2. CATCH A SPECIFIC EXCEPTION ⭐⭐⭐
# ============================================================

try:
    x = 10 / 0
except ZeroDivisionError:
    print("Cannot divide by zero")


# Output:
# Cannot divide by zero

# IMPORTANT:
# It is better to catch a specific exception
# instead of using a plain "except".


# ============================================================
# 3. VALUEERROR
# ============================================================

try:
    number = int("hello")

except ValueError:
    print("Invalid integer")


# Output:
# Invalid integer


# int("hello") causes ValueError.


# ============================================================
# 4. INDEXERROR
# ============================================================

numbers = [10, 20, 30]

try:
    print(numbers[10])

except IndexError:
    print("Index does not exist")


# Output:
# Index does not exist


# ============================================================
# 5. KEYERROR
# ============================================================

student = {"name": "Rahim", "age": 20}

try:
    print(student["city"])

except KeyError:
    print("Key does not exist")


# Output:
# Key does not exist


# ============================================================
# 6. TYPEERROR
# ============================================================

try:
    result = "10" + 5

except TypeError:
    print("Invalid types")


# Output:
# Invalid types


# ============================================================
# 7. MULTIPLE EXCEPTIONS
# ============================================================

try:

    a = int(input())
    b = int(input())

    print(a / b)

except ValueError:
    print("Please enter valid integers")

except ZeroDivisionError:
    print("Cannot divide by zero")


# Example:
#
# Input:
# 10
# 0
#
# Output:
# Cannot divide by zero


# ============================================================
# 8. MULTIPLE EXCEPTIONS IN ONE BLOCK
# ============================================================

try:

    x = int("abc")

except (ValueError, TypeError):
    print("Invalid operation")


# You can handle multiple exception types
# using a tuple.


# ============================================================
# 9. GETTING THE ERROR MESSAGE
# ============================================================

try:
    x = int("hello")

except ValueError as e:
    print(e)


# Output:
# invalid literal for int() with base 10: 'hello'


# "as e" stores the exception object
# inside the variable e.


# ============================================================
# 10. GENERAL EXCEPTION
# ============================================================

try:
    x = 10 / 0

except Exception as e:
    print("Error:", e)


# Output:
# Error: division by zero


# Exception catches most normal runtime errors.


# IMPORTANT:
#
# Prefer:
#
# except ValueError:
#
# instead of:
#
# except Exception:
#
# when you know exactly what error you expect.


# ============================================================
# 11. try + except + else
# ============================================================

try:

    x = 10 / 2

except ZeroDivisionError:

    print("Cannot divide by zero")

else:

    print("Division successful")
    print(x)


# Output:
# Division successful
# 5.0


# "else" runs ONLY when there is NO exception.


# ============================================================
# 12. try + except + finally ⭐⭐⭐
# ============================================================

try:

    x = 10 / 2
    print(x)

except ZeroDivisionError:

    print("Cannot divide by zero")

finally:

    print("This always runs")


# Output:
# 5.0
# This always runs


# "finally" runs whether an error happens or not.


# ============================================================
# 13. ERROR CASE WITH FINALLY
# ============================================================

try:

    x = 10 / 0
    print(x)

except ZeroDivisionError:

    print("Cannot divide by zero")

finally:

    print("Program finished")


# Output:
# Cannot divide by zero
# Program finished


# ============================================================
# 14. COMPLETE STRUCTURE ⭐⭐⭐
# ============================================================

try:

    # Code that may cause an error
    pass

except ValueError:

    # Handle ValueError
    pass

except ZeroDivisionError:

    # Handle ZeroDivisionError
    pass

else:

    # Runs if NO exception occurred
    pass

finally:

    # Always runs
    pass


# ============================================================
# 15. PRACTICAL INPUT EXAMPLE
# ============================================================

try:

    age = int(input("Enter your age: "))

    print("Your age is:", age)

except ValueError:

    print("Please enter a valid number")


# If input is:
#
# 20
#
# Output:
# Your age is: 20
#
#
# If input is:
#
# abc
#
# Output:
# Please enter a valid number


# ============================================================
# 16. TRY / EXCEPT IN A LOOP ⭐⭐⭐
# ============================================================

while True:

    try:

        number = int(input("Enter a number: "))

        print("You entered:", number)

        break

    except ValueError:

        print("Invalid input. Try again.")


# The loop continues until valid input is given.


# ============================================================
# 17. FILE HANDLING + TRY / EXCEPT
# ============================================================

try:

    file = open("data.txt", "r")

    content = file.read()

    print(content)

    file.close()

except FileNotFoundError:

    print("File does not exist")


# ============================================================
# 18. BETTER FILE HANDLING ⭐⭐⭐
# ============================================================

try:

    with open("data.txt", "r") as file:

        content = file.read()

        print(content)

except FileNotFoundError:

    print("File does not exist")


# "with" automatically closes the file.
#
# This is preferred over manually calling:
#
# file.close()


# ============================================================
# 19. RAISING AN EXCEPTION
# ============================================================

# You can manually create an error
# using "raise".

age = -5

if age < 0:

    raise ValueError("Age cannot be negative")


# Output:
# ValueError: Age cannot be negative


# ============================================================
# 20. raise + try / except
# ============================================================

try:

    age = -5

    if age < 0:
        raise ValueError("Age cannot be negative")

except ValueError as e:

    print("Error:", e)


# Output:
# Error: Age cannot be negative


# ============================================================
# 21. CUSTOM EXCEPTION
# ============================================================


class NegativeNumberError(Exception):
    pass


try:

    number = -10

    if number < 0:
        raise NegativeNumberError("Number cannot be negative")

except NegativeNumberError as e:

    print(e)


# Output:
# Number cannot be negative


# ============================================================
# 22. COMMON PYTHON EXCEPTIONS
# ============================================================

# ValueError
# -> Correct type, but invalid value
#
# Example:
# int("abc")


# TypeError
# -> Wrong type for an operation
#
# Example:
# "10" + 5


# ZeroDivisionError
# -> Division by zero
#
# Example:
# 10 / 0


# IndexError
# -> Invalid list/string index
#
# Example:
# numbers[100]


# KeyError
# -> Dictionary key does not exist
#
# Example:
# data["unknown"]


# FileNotFoundError
# -> File does not exist
#
# Example:
# open("missing.txt")


# NameError
# -> Variable does not exist
#
# Example:
# print(x)
# when x was never defined


# AttributeError
# -> Object does not have that attribute/method
#
# Example:
# numbers = [1, 2, 3]
# numbers.upper()


# ImportError
# -> Problem importing something


# ModuleNotFoundError
# -> Module cannot be found


# ============================================================
# 23. COMMON EXCEPTION PATTERN ⭐⭐⭐
# ============================================================

try:

    number = int(input())

    result = 100 / number

    print(result)

except ValueError:

    print("Input must be an integer")

except ZeroDivisionError:

    print("Number cannot be zero")


# ============================================================
# 24. EXCEPTION ORDER ⭐⭐⭐
# ============================================================

# Put specific exceptions BEFORE
# general exceptions.

try:

    x = int("abc")

except ValueError:

    print("ValueError")

except Exception:

    print("Some other error")


# This is correct.


# DON'T do this:

# try:
#     x = int("abc")
#
# except Exception:
#     print("Error")
#
# except ValueError:
#     print("ValueError")


# ValueError would never reach the second
# except because Exception catches it first.


# ============================================================
# 25. DON'T USE try/except FOR NORMAL LOGIC
# ============================================================

# BAD STYLE:

numbers = [1, 2, 3]

try:

    print(numbers[5])

except IndexError:

    print("Not found")


# If you already know the index may be invalid,
# often a normal condition is clearer:

index = 5

if 0 <= index < len(numbers):

    print(numbers[index])

else:

    print("Not found")


# Use exceptions for exceptional situations,
# not as a replacement for every if/else.


# ============================================================
# 26. try/except IN FUNCTIONS
# ============================================================


def divide(a, b):

    try:

        return a / b

    except ZeroDivisionError:

        return None


print(divide(10, 2))
# Output:
# 5.0


print(divide(10, 0))
# Output:
# None


# ============================================================
# 27. FUNCTION WITH RAISE ⭐⭐⭐
# ============================================================


def divide(a, b):

    if b == 0:
        raise ValueError("b cannot be zero")

    return a / b


try:

    print(divide(10, 0))

except ValueError as e:

    print("Error:", e)


# Output:
# Error: b cannot be zero


# ============================================================
# 28. try/except WITH DICTIONARY
# ============================================================

data = {"name": "Rahim", "age": 20}

try:

    print(data["salary"])

except KeyError:

    print("Salary key not found")


# But if you only want a default value,
# get() is usually better:

print(data.get("salary", 0))
# Output:
# 0


# ============================================================
# 29. try/except WITH LIST
# ============================================================

numbers = [10, 20, 30]

try:

    index = int(input())

    print(numbers[index])

except ValueError:

    print("Index must be an integer")

except IndexError:

    print("Invalid index")


# ============================================================
# 30. try/except WITH USER INPUT
# ============================================================

while True:

    try:

        a, b = map(int, input().split())

        print(a + b)

        break

    except ValueError:

        print("Enter two integers")


# ============================================================
# 31. COMPETITIVE PROGRAMMING NOTE ⭐⭐⭐
# ============================================================

# In Competitive Programming,
# you usually DON'T need try/except.
#
# Online judge input is normally guaranteed
# to follow the problem's input format.
#
# Example:
#
# a, b = map(int, input().split())
#
# is enough.
#
# You don't normally need:
#
# try:
#     a, b = map(int, input().split())
# except:
#     ...
#
#
# try/except is much more useful in:
#
# - File handling
# - User input validation
# - APIs
# - Web applications
# - Database operations
# - Network operations
# - Production applications


# ============================================================
# 32. QUICK SUMMARY
# ============================================================

# Basic:
#
# try:
#     ...
# except:
#     ...


# Specific:
#
# try:
#     ...
# except ValueError:
#     ...


# Multiple:
#
# try:
#     ...
# except ValueError:
#     ...
# except TypeError:
#     ...


# Error object:
#
# try:
#     ...
# except ValueError as e:
#     print(e)


# Else:
#
# try:
#     ...
# except:
#     ...
# else:
#     ...


# Finally:
#
# try:
#     ...
# except:
#     ...
# finally:
#     ...


# Raise:
#
# raise ValueError("Something went wrong")


# ============================================================
# 33. ⭐ THE MAIN THING TO REMEMBER
# ============================================================

# try
# -> "Try this code."


# except
# -> "If a specific error happens, handle it."


# else
# -> "If NO error happens, do this."


# finally
# -> "Whether error happens or not, do this."


# raise
# -> "I want to manually create an error."
