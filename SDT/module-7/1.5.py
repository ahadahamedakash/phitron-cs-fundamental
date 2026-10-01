# ============================================================
#                      CLASS COMPOSITION
#                INHERITANCE VS COMPOSITION
# ============================================================
#
# 1. What is Composition?
# 2. "HAS-A" relationship
# 3. Simple Composition Example
# 4. Composition with multiple classes
# 5. Inheritance
# 6. "IS-A" relationship
# 7. Inheritance vs Composition
# 8. When to use which?
# ============================================================


# ============================================================
# 1. WHAT IS COMPOSITION?
# ============================================================
#
# Composition means creating a class that contains an object
# of another class.
#
# In simple words:
#
# One class USES another class.
#
#
# Example:
#
# Car HAS an Engine.
#
# Car
#  |
#  └── Engine
#
#
# This is called a "HAS-A" relationship.
# ============================================================


# ============================================================
# 2. SIMPLE COMPOSITION EXAMPLE
# ============================================================


class Engine:

    def start(self):
        print("Engine started.")


class Car:

    def __init__(self):

        # Car contains an Engine object
        self.engine = Engine()

    def start(self):

        # Car uses the Engine object
        self.engine.start()

        print("Car started.")


car = Car()

car.start()


# Output:
#
# Engine started.
# Car started.


#
# Here:
#
# Car HAS-A Engine.
#
# The Engine object is stored inside Car:
#
# self.engine = Engine()
# ============================================================


# ============================================================
# 3. COMPOSITION WITH AN EXTERNAL OBJECT
# ============================================================
#
# We don't always have to create the object inside the class.
#
# We can also pass an object from outside.
# ============================================================


class Engine:

    def start(self):
        print("Engine started.")


class Car:

    def __init__(self, engine):

        # Store the provided Engine object
        self.engine = engine

    def start(self):

        self.engine.start()

        print("Car started.")


engine = Engine()

car = Car(engine)

car.start()


# ============================================================
# 4. WHY IS THIS USEFUL?
# ============================================================
#
# Composition allows us to build a complex class using
# smaller, independent classes.
#
#
# Example:
#
# Car
#  |
#  ├── Engine
#  ├── Battery
#  └── GPS
#
#
# Each class has its own responsibility.
# ============================================================


class Engine:

    def start(self):
        print("Engine started.")


class Battery:

    def charge(self):
        print("Battery charging.")


class Car:

    def __init__(self, engine, battery):

        self.engine = engine
        self.battery = battery

    def start(self):

        self.battery.charge()
        self.engine.start()

        print("Car started.")


engine = Engine()
battery = Battery()

car = Car(engine, battery)

car.start()


# ============================================================
# 5. INHERITANCE
# ============================================================
#
# Inheritance means creating a new class based on an existing
# class.
#
# The child class gets the attributes and methods of the
# parent class.
#
#
# Inheritance represents an:
#
# "IS-A" relationship.
#
#
# Example:
#
# Dog IS-A Animal.
#
# Cat IS-A Animal.
# ============================================================


class Animal:

    def eat(self):
        print("Animal is eating.")


class Dog(Animal):

    def bark(self):
        print("Dog is barking.")


dog = Dog()

dog.eat()
dog.bark()


# Output:
#
# Animal is eating.
# Dog is barking.


#
# Dog inherits from Animal.
#
# Dog IS-A Animal.
# ============================================================


# ============================================================
# 6. INHERITANCE WITH METHOD OVERRIDING
# ============================================================
#
# A child class can provide its own version of a method.
#
# This is called Method Overriding.
# ============================================================


class Animal:

    def speak(self):
        print("Animal makes a sound.")


class Dog(Animal):

    def speak(self):
        print("Dog says Woof!")


dog = Dog()

dog.speak()


# Output:
#
# Dog says Woof!
# ============================================================


# ============================================================
# 7. INHERITANCE vs COMPOSITION
# ============================================================
#
#
# INHERITANCE:
#
# Represents:
#
#     IS-A
#
# Example:
#
#     Dog IS-A Animal
#
#
# COMPOSITION:
#
# Represents:
#
#     HAS-A
#
# Example:
#
#     Car HAS-A Engine
#
#
# ------------------------------------------------------------
#
#
# INHERITANCE:
#
# class Dog(Animal):
#     ...
#
#
# COMPOSITION:
#
# class Car:
#
#     def __init__(self):
#         self.engine = Engine()
#
# ============================================================


# ============================================================
# 8. SAME PROBLEM USING INHERITANCE
# ============================================================
#
# Suppose we have:
#
# Animal
# Dog
# Cat
#
# This is a natural "IS-A" relationship.
# ============================================================


class Animal:

    def eat(self):
        print("Eating...")


class Dog(Animal):

    def bark(self):
        print("Barking...")


class Cat(Animal):

    def meow(self):
        print("Meowing...")


dog = Dog()
cat = Cat()

dog.eat()
dog.bark()

cat.eat()
cat.meow()


# ============================================================
# 9. SAME IDEA USING COMPOSITION
# ============================================================
#
# Suppose a Car needs an Engine.
#
# Car does NOT "IS-A" Engine.
#
# Car "HAS-A" Engine.
#
# So composition makes more sense.
# ============================================================


class Engine:

    def start(self):
        print("Engine started.")


class Car:

    def __init__(self):

        self.engine = Engine()

    def start(self):

        self.engine.start()


car = Car()

car.start()


# ============================================================
# 10. WHEN TO USE INHERITANCE?
# ============================================================
#
# Use inheritance when there is a strong "IS-A" relationship.
#
#
# Examples:
#
# Dog IS-A Animal
# Cat IS-A Animal
# Manager IS-A Employee
# Car IS-A Vehicle
#
#
# Inheritance is useful when the child genuinely represents
# a specialized version of the parent.
# ============================================================


# ============================================================
# 11. WHEN TO USE COMPOSITION?
# ============================================================
#
# Use composition when one object needs another object to
# perform its job.
#
#
# Examples:
#
# Car HAS-A Engine
# Computer HAS-A CPU
# House HAS-A Room
# User HAS-A Address
#
#
# Composition helps keep classes independent and focused.
# ============================================================


# ============================================================
# 12. IMPORTANT RULE TO REMEMBER
# ============================================================
#
#
# Ask yourself:
#
#
# "Is this object another type of that object?"
#
# If YES:
#
#     Consider INHERITANCE.
#
# Example:
#
#     Dog IS-A Animal
#
#
# If NO, but it uses/contains another object:
#
#     Consider COMPOSITION.
#
# Example:
#
#     Car HAS-A Engine
#
# ============================================================


# ============================================================
# 13. QUICK COMPARISON
# ============================================================
#
#
# INHERITANCE
# ------------------------------------------------------------
#
# Relationship:
#     IS-A
#
# Example:
#     Dog -> Animal
#
# Syntax:
#     class Dog(Animal):
#
# Main idea:
#     Child inherits from Parent.
#
#
# COMPOSITION
# ------------------------------------------------------------
#
# Relationship:
#     HAS-A
#
# Example:
#     Car -> Engine
#
# Syntax:
#     self.engine = Engine()
#
# Main idea:
#     One class contains/uses another object.
#
# ============================================================


# ============================================================
# 14. FINAL EXAMPLE
# ============================================================
#
# A useful way to remember:
#
#
# INHERITANCE:
#
#     class ElectricCar(Car):
#         ...
#
# ElectricCar IS-A Car.
#
#
# COMPOSITION:
#
#     class Car:
#
#         def __init__(self):
#             self.engine = Engine()
#
# Car HAS-A Engine.
#
#
# ============================================================
#
# FINAL RULE:
#
#     IS-A  -> Inheritance
#
#     HAS-A -> Composition
