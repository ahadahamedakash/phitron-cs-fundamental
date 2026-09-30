# ============================================================
# STATIC METHOD AND CLASS METHOD DECORATORS IN PYTHON
# ============================================================
#
# Python provides two useful decorators:
#
# 1. @staticmethod
# 2. @classmethod
#
# A decorator changes or extends the behavior of a method.
# ============================================================


# ============================================================
# 1. STATIC METHOD
# ============================================================
#
# A static method does NOT receive:
# - self
# - cls
#
# It behaves like a normal function but belongs to the class.
#
# We use @staticmethod to create a static method.
# ============================================================


class Calculator:

    # Normal/instance method
    def add(self, a, b):
        return a + b

    # Static method
    @staticmethod
    def multiply(a, b):
        return a * b

    # Another static method
    @staticmethod
    def is_even(number):
        return number % 2 == 0


# Creating an object
calculator = Calculator()


# Calling instance method
print("Addition:", calculator.add(10, 20))


# Calling static method using the class
print("Multiplication:", Calculator.multiply(10, 20))

# Calling static method using the object
print("Is 10 even?", calculator.is_even(10))


# ============================================================
# 2. CLASS METHOD
# ============================================================
#
# A class method receives the class itself as the first argument.
#
# The first parameter is normally called "cls".
#
# We use @classmethod to create a class method.
#
# Class methods are useful when we want to work with
# class-level data or create alternative ways to create objects.
# ============================================================


class Student:

    # Class variable
    school_name = "ABC School"

    def __init__(self, name, age):
        self.name = name
        self.age = age

    # Instance method
    def show_info(self):
        print("Name:", self.name)
        print("Age:", self.age)
        print("School:", Student.school_name)

    # Class method
    @classmethod
    def change_school(cls, new_school):
        # cls refers to the Student class
        cls.school_name = new_school

    # Another class method
    # This creates a Student object from a string.
    @classmethod
    def from_string(cls, student_data):

        # Split the string
        name, age = student_data.split(",")

        # Convert age from string to integer
        age = int(age)

        # Create and return a Student object
        return cls(name, age)


# ============================================================
# USING CLASS METHOD
# ============================================================

student1 = Student("Rahim", 20)

student1.show_info()

print()


# Change class variable using class method
Student.change_school("XYZ College")

student1.show_info()

print()


# ============================================================
# USING CLASS METHOD AS AN ALTERNATIVE CONSTRUCTOR
# ============================================================
#
# Normally, we create an object like this:
#
# student = Student("Karim", 22)
#
# But using the class method from_string(), we can also create
# an object from a string.
# ============================================================

student2 = Student.from_string("Karim,22")

student2.show_info()


# ============================================================
# DIFFERENCE BETWEEN STATIC METHOD AND CLASS METHOD
# ============================================================
#
# STATIC METHOD:
#
# @staticmethod
# def method(a, b):
#     ...
#
# - Does not receive self.
# - Does not receive cls.
# - Cannot directly access instance data.
# - Does not automatically receive class data.
# - Usually used for utility/helper functions.
#
#
# CLASS METHOD:
#
# @classmethod
# def method(cls):
#     ...
#
# - Receives cls.
# - Can access and modify class variables.
# - Can create objects using cls().
# - Often used as an alternative constructor.
# ============================================================
