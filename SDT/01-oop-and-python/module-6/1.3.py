# Abstract Class and Abstract Method in Python
#
# An abstract class is a class that cannot be used to create objects directly.
# It is used as a blueprint for other classes.
#
# An abstract method is a method that is declared in the abstract class
# but does not contain the actual implementation.
# The child class must implement the abstract method.


# Import ABC and abstractmethod from abc module
from abc import ABC, abstractmethod


# Abstract Class
class Bank(ABC):

    # Constructor
    def __init__(self, holder_name, balance):
        self.holder_name = holder_name
        self.balance = balance

    # Abstract Method
    # This method has no implementation here.
    # Every child class must implement this method.
    @abstractmethod
    def calculate_interest(self):
        pass


# Child Class 1
class SavingsAccount(Bank):

    # Implementing the abstract method
    def calculate_interest(self):
        interest = self.balance * 0.05
        print(f"Savings Account Interest: {interest}")


# Child Class 2
class CurrentAccount(Bank):

    # Implementing the abstract method
    def calculate_interest(self):
        interest = self.balance * 0.02
        print(f"Current Account Interest: {interest}")


# Creating objects of child classes
savings = SavingsAccount("Rahim", 10000)
current = CurrentAccount("Karim", 20000)


# Calling the implemented abstract method
print("Holder Name:", savings.holder_name)
savings.calculate_interest()

print()

print("Holder Name:", current.holder_name)
current.calculate_interest()


# ------------------------------------------------
# IMPORTANT:
# ------------------------------------------------
#
# We cannot create an object of the abstract class:
#
# bank = Bank("Rahim", 10000)
#
# This will give an error because Bank contains
# an abstract method that has not been implemented.
