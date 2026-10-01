# ============================================================
#                  DESIGN PATTERNS IN PYTHON
#              DEVELOPER OVERVIEW / ROADMAP
# ============================================================
#
# Design patterns are reusable solutions to common software
# design problems.
#
# A design pattern is NOT a piece of code that you copy.
#
# It is a way of thinking about how objects, classes and
# responsibilities should be organized.
#
#
# The goal of learning design patterns:
#
# 1. Write maintainable code
# 2. Reduce unnecessary coupling
# 3. Make code easier to extend
# 4. Communicate design ideas with other developers
# 5. Recognize common architectures in existing code
#
#
# IMPORTANT:
#
# You do NOT need to memorize every design pattern.
#
# A strong Python developer should understand the common ones
# and know when NOT to use them.
# ============================================================


# ============================================================
# DESIGN PATTERN CATEGORIES
# ============================================================
#
# Traditionally, the famous GoF (Gang of Four) patterns are
# divided into three categories:
#
#
# 1. CREATIONAL
# ------------------------------------------------------------
# Concerned with creating objects.
#
# Examples:
#
# - Singleton
# - Factory Method
# - Abstract Factory
# - Builder
# - Prototype
#
#
# 2. STRUCTURAL
# ------------------------------------------------------------
# Concerned with how classes and objects are combined.
#
# Examples:
#
# - Adapter
# - Decorator
# - Facade
# - Proxy
# - Composite
# - Bridge
# - Flyweight
#
#
# 3. BEHAVIORAL
# ------------------------------------------------------------
# Concerned with communication and responsibility between
# objects.
#
# Examples:
#
# - Strategy
# - Observer
# - Command
# - State
# - Template Method
# - Chain of Responsibility
# - Iterator
# - Mediator
# - Memento
# - Visitor
#
# ============================================================


# ============================================================
#                  TIER 1: MUST KNOW
# ============================================================
#
# If you are serious about becoming a strong Python developer,
# prioritize these patterns:
#
# 1. Factory
# 2. Builder
# 3. Strategy
# 4. Decorator
# 5. Adapter
# 6. Facade
# 7. Observer
# 8. Command
# 9. Dependency Injection
# 10. Repository
#
#
# Singleton is worth understanding, but you should be careful
# about actually using it.
# ============================================================


# ============================================================
# 1. FACTORY PATTERN
# ============================================================
#
# Problem:
#
# We don't want the calling code to worry about exactly which
# object needs to be created.
#
#
# Instead of:
#
#     if type == "car":
#         Car()
#
#     elif type == "bike":
#         Bike()
#
#
# We can centralize object creation.
#
#
# Main idea:
#
#     "Tell me what you need,
#      and I will create the appropriate object."
# ============================================================


class Dog:

    def speak(self):
        return "Woof"


class Cat:

    def speak(self):
        return "Meow"


class AnimalFactory:

    @staticmethod
    def create_animal(animal_type):

        if animal_type == "dog":
            return Dog()

        if animal_type == "cat":
            return Cat()

        raise ValueError("Unknown animal type")


animal = AnimalFactory.create_animal("dog")

print(animal.speak())


#
# USE FACTORY WHEN:
#
# - Object creation is complicated.
# - There are multiple implementations.
# - You want to hide creation logic.
#
#
# Python note:
#
# Don't create a factory class just because you can.
# A simple function can often be a perfectly good factory.
# ============================================================


# ============================================================
# 2. BUILDER PATTERN
# ============================================================
#
# Problem:
#
# An object has many optional parameters or a complicated
# construction process.
#
#
# Instead of:
#
#     User(
#         name,
#         age,
#         email,
#         address,
#         phone,
#         country,
#         ...
#     )
#
#
# Builder lets us construct an object step by step.
# ============================================================


class User:

    def __init__(self, name, age=None, email=None, city=None):

        self.name = name
        self.age = age
        self.email = email
        self.city = city


class UserBuilder:

    def __init__(self):

        self.name = None
        self.age = None
        self.email = None
        self.city = None

    def set_name(self, name):

        self.name = name
        return self

    def set_age(self, age):

        self.age = age
        return self

    def set_email(self, email):

        self.email = email
        return self

    def set_city(self, city):

        self.city = city
        return self

    def build(self):

        return User(name=self.name, age=self.age, email=self.email, city=self.city)


user = (
    UserBuilder()
    .set_name("Rahim")
    .set_age(25)
    .set_email("rahim@example.com")
    .set_city("Dhaka")
    .build()
)


#
# IMPORTANT:
#
# In modern Python, Builder is not always necessary.
#
# dataclasses, keyword arguments and configuration objects
# can often solve the same problem more simply.
# ============================================================


# ============================================================
# 3. STRATEGY PATTERN
# ============================================================
#
# One of the MOST useful patterns.
#
# Problem:
#
# We have multiple ways of doing the same thing.
#
#
# Example:
#
# Payment:
#
# - Credit Card
# - PayPal
# - Bank
#
#
# Instead of a huge if/elif structure,
# we can inject a strategy.
# ============================================================


class CreditCardPayment:

    def pay(self, amount):

        print(f"Paid {amount} using credit card.")


class PayPalPayment:

    def pay(self, amount):

        print(f"Paid {amount} using PayPal.")


class Checkout:

    def __init__(self, payment_method):

        self.payment_method = payment_method

    def checkout(self, amount):

        self.payment_method.pay(amount)


payment = CreditCardPayment()

checkout = Checkout(payment)

checkout.checkout(100)


#
# The important idea:
#
# Checkout does not care HOW payment happens.
#
# It only knows:
#
#     payment_method.pay()
#
#
# This reduces coupling.
# ============================================================


# ============================================================
# 4. DECORATOR PATTERN
# ============================================================
#
# You already learned this.
#
# Problem:
#
# Add behavior to a function/object without modifying its
# original implementation.
#
#
# Common uses:
#
# - Logging
# - Authentication
# - Timing
# - Validation
# - Caching
# ============================================================


def logger(func):

    def wrapper(*args, **kwargs):

        print(f"Calling {func.__name__}")

        result = func(*args, **kwargs)

        print(f"Finished {func.__name__}")

        return result

    return wrapper


@logger
def add(a, b):

    return a + b


print(add(2, 3))


#
# Python developers should be VERY comfortable with decorators.
# ============================================================


# ============================================================
# 5. ADAPTER PATTERN
# ============================================================
#
# Problem:
#
# Two systems have incompatible interfaces.
#
#
# Example:
#
# Your application expects:
#
#     send(message)
#
# But an external library provides:
#
#     send_message(text)
#
#
# Adapter makes them compatible.
# ============================================================


class OldEmailService:

    def send_message(self, text):

        print(f"Email: {text}")


class EmailAdapter:

    def __init__(self, email_service):

        self.email_service = email_service

    def send(self, message):

        self.email_service.send_message(message)


service = OldEmailService()

adapter = EmailAdapter(service)

adapter.send("Hello!")


#
# Very common when integrating:
#
# - APIs
# - Third-party libraries
# - Legacy systems
# - Different interfaces
# ============================================================


# ============================================================
# 6. FACADE PATTERN
# ============================================================
#
# Problem:
#
# A system has many complicated components.
#
# Instead of exposing all of them to the user,
# provide one simple interface.
# ============================================================


class CPU:

    def start(self):
        print("CPU started")


class Memory:

    def load(self):
        print("Memory loaded")


class Computer:

    def __init__(self):

        self.cpu = CPU()
        self.memory = Memory()

    def start(self):

        self.cpu.start()
        self.memory.load()

        print("Computer started")


computer = Computer()

computer.start()


#
# The user only needs:
#
#     computer.start()
#
# They don't need to know how CPU and Memory work.
# ============================================================


# ============================================================
# 7. OBSERVER PATTERN
# ============================================================
#
# Problem:
#
# One object changes and multiple other objects need to know.
#
#
# Example:
#
# YouTube channel
#       ↓
# Subscribers
#
#
# When the channel publishes something,
# subscribers receive a notification.
# ============================================================


class Channel:

    def __init__(self):

        self.subscribers = []

    def subscribe(self, subscriber):

        self.subscribers.append(subscriber)

    def notify(self, message):

        for subscriber in self.subscribers:

            subscriber.update(message)


class Subscriber:

    def __init__(self, name):

        self.name = name

    def update(self, message):

        print(f"{self.name} received: {message}")


channel = Channel()

rahim = Subscriber("Rahim")
karim = Subscriber("Karim")

channel.subscribe(rahim)
channel.subscribe(karim)

channel.notify("New video uploaded!")


#
# In real Python applications, this idea appears in:
#
# - Event systems
# - GUI applications
# - Message systems
# - Pub/Sub systems
# ============================================================


# ============================================================
# 8. COMMAND PATTERN
# ============================================================
#
# Problem:
#
# We want to represent an action as an object.
#
# This allows us to:
#
# - Queue actions
# - Log actions
# - Undo actions
# - Retry actions
# ============================================================


class Light:

    def turn_on(self):

        print("Light ON")


class TurnOnCommand:

    def __init__(self, light):

        self.light = light

    def execute(self):

        self.light.turn_on()


light = Light()

command = TurnOnCommand(light)

command.execute()


#
# Main idea:
#
#     Action → Object
#
# ============================================================


# ============================================================
# 9. DEPENDENCY INJECTION
# ============================================================
#
# This is extremely important for modern software development.
#
# Problem:
#
# A class creates its own dependencies.
#
# Example:
#
#     class Service:
#
#         def __init__(self):
#             self.database = MySQLDatabase()
#
#
# This makes testing and changing the database harder.
#
#
# Better:
#
#     Pass the dependency from outside.
# ============================================================


class MySQLDatabase:

    def save(self, data):

        print("Saved to MySQL")


class UserService:

    def __init__(self, database):

        # Dependency is injected.
        self.database = database

    def create_user(self, data):

        self.database.save(data)


database = MySQLDatabase()

service = UserService(database)

service.create_user("Rahim")


#
# Benefits:
#
# - Easier testing
# - Less coupling
# - Easier replacement
# - Cleaner architecture
#
#
# Dependency Injection is more important to understand than
# memorizing many traditional design patterns.
# ============================================================


# ============================================================
# 10. REPOSITORY PATTERN
# ============================================================
#
# Problem:
#
# Business logic should not need to know database details.
#
#
# Instead of:
#
#     service -> SQL queries
#
#
# We can have:
#
#     service -> repository -> database
# ============================================================


class UserRepository:

    def save(self, user):

        print("Saving user to database.")

    def find_by_id(self, user_id):

        print(f"Finding user {user_id}")


class UserService:

    def __init__(self, repository):

        self.repository = repository

    def create_user(self, user):

        self.repository.save(user)


repository = UserRepository()

service = UserService(repository)

service.create_user("Rahim")


#
# Repository separates:
#
# Business logic
#       from
# Database access
#
#
# Very common in larger applications.
# ============================================================


# ============================================================
# 11. SINGLETON PATTERN
# ============================================================
#
# Singleton tries to ensure that only ONE instance of a class
# exists.
#
#
# Example use cases sometimes include:
#
# - Shared configuration
# - Certain application-wide resources
#
#
# BUT:
#
# Singleton is often overused.
#
# It can introduce:
#
# - Global state
# - Hidden dependencies
# - Testing difficulties
#
#
# Python often provides simpler alternatives:
#
# - Module-level objects
# - Dependency Injection
# - Explicitly shared instances
#
#
# So:
#
# KNOW SINGLETON.
#
# But don't automatically use Singleton whenever you need
# one shared object.
# ============================================================


class Singleton:

    _instance = None

    def __new__(cls):

        if cls._instance is None:

            cls._instance = super().__new__(cls)

        return cls._instance


a = Singleton()
b = Singleton()

print(a is b)

# Output:
#
# True


# ============================================================
#              TIER 2: GOOD TO KNOW
# ============================================================
#
# These are useful patterns that you should recognize:
#
#
# 1. State
# ------------------------------------------------------------
# Object behavior changes based on its current state.
#
# Example:
#
#     Order:
#     Pending
#     Paid
#     Shipped
#     Delivered
#
#
# 2. Template Method
# ------------------------------------------------------------
# Parent class defines the overall algorithm while subclasses
# customize specific steps.
#
#
# 3. Chain of Responsibility
# ------------------------------------------------------------
# Pass a request through a chain of handlers.
#
# Useful for:
#
#     Middleware
#     Validation pipelines
#     Request processing
#
#
# 4. Proxy
# ------------------------------------------------------------
# An object controls access to another object.
#
# Common concepts:
#
#     Lazy loading
#     Access control
#     Caching
#
#
# 5. Composite
# ------------------------------------------------------------
# Treat individual objects and groups of objects uniformly.
#
# Useful for tree structures:
#
#     File system
#     UI components
#     Organization hierarchy
# ============================================================


# ============================================================
#              TIER 3: KNOW THE IDEA
# ============================================================
#
# You don't necessarily need to implement these regularly,
# but you should recognize them when reading code:
#
#
# - Abstract Factory
# - Prototype
# - Bridge
# - Flyweight
# - Iterator
# - Mediator
# - Memento
# - Visitor
#
#
# Don't memorize their implementation.
#
# Understand:
#
#     What problem does it solve?
#
#     What does the structure look like?
#
#     When might I encounter it?
# ============================================================


# ============================================================
#          PATTERNS PYTHON DEVELOPERS SHOULD PRIORITIZE
# ============================================================
#
#
# VERY HIGH PRIORITY
# ------------------------------------------------------------
#
# 1. Decorator
# 2. Strategy
# 3. Factory
# 4. Adapter
# 5. Facade
# 6. Dependency Injection
# 7. Repository
#
#
# HIGH PRIORITY
# ------------------------------------------------------------
#
# 8. Observer
# 9. Command
# 10. State
# 11. Builder
# 12. Proxy
#
#
# UNDERSTAND BUT DON'T OVERUSE
# ------------------------------------------------------------
#
# 13. Singleton
# 14. Abstract Factory
# 15. Template Method
# 16. Composite
#
#
# RECOGNIZE
# ------------------------------------------------------------
#
# 17. Prototype
# 18. Bridge
# 19. Flyweight
# 20. Mediator
# 21. Memento
# 22. Visitor
# ============================================================


# ============================================================
#          MORE IMPORTANT THAN DESIGN PATTERNS
# ============================================================
#
# Being a top-level developer is NOT about knowing 23 patterns.
#
# You should also understand:
#
#
# 1. SOLID
# ------------------------------------------------------------
#
# S - Single Responsibility
# O - Open/Closed
# L - Liskov Substitution
# I - Interface Segregation
# D - Dependency Inversion
#
#
# 2. COMPOSITION OVER INHERITANCE
# ------------------------------------------------------------
#
# Prefer composition when inheritance doesn't represent a
# genuine "IS-A" relationship.
#
#
# 3. COUPLING & COHESION
# ------------------------------------------------------------
#
# Low coupling:
# Classes don't unnecessarily depend on each other.
#
# High cohesion:
# A class has a focused responsibility.
#
#
# 4. DEPENDENCY INJECTION
# ------------------------------------------------------------
#
# Make dependencies explicit and replaceable.
#
#
# 5. ABSTRACTION
# ------------------------------------------------------------
#
# Hide unnecessary implementation details.
#
#
# 6. SEPARATION OF CONCERNS
# ------------------------------------------------------------
#
# Different parts of the system should have different
# responsibilities.
#
#
# 7. TESTABILITY
# ------------------------------------------------------------
#
# Good design should make code easy to test.
# ============================================================


# ============================================================
#              DESIGN PATTERN DECISION GUIDE
# ============================================================
#
#
# Need to CREATE different types of objects?
#
#     -> Factory
#
#
# Object has many optional construction steps?
#
#     -> Builder
#
#
# Need different algorithms for the same task?
#
#     -> Strategy
#
#
# Need to add behavior without changing original code?
#
#     -> Decorator
#
#
# Two incompatible interfaces need to work together?
#
#     -> Adapter
#
#
# Complex subsystem needs a simple interface?
#
#     -> Facade
#
#
# One event needs to notify many objects?
#
#     -> Observer
#
#
# Need to represent an action as an object?
#
#     -> Command
#
#
# Object behavior changes according to state?
#
#     -> State
#
#
# Need to separate database logic from business logic?
#
#     -> Repository
#
#
# Need to provide dependencies from outside?
#
#     -> Dependency Injection
#
#
# Need exactly one shared instance?
#
#     -> First ask whether Singleton is actually necessary.
# ============================================================


# ============================================================
#                 FINAL MENTAL MODEL
# ============================================================
#
#
# Don't think:
#
#     "Which design pattern should I use?"
#
#
# First think:
#
#     "What problem am I trying to solve?"
#
#
# Then:
#
#     "What is changing?"
#
#     "What should remain stable?"
#
#     "Which class should be responsible for this?"
#
#     "Can I reduce coupling?"
#
#     "Can I make this easier to test?"
#
#
# THEN choose a pattern if it actually helps.
#
#
# ------------------------------------------------------------
#
# A strong developer doesn't use patterns everywhere.
#
# A strong developer recognizes when a pattern solves a real
# problem and also recognizes when a simple function or class
# is better.
