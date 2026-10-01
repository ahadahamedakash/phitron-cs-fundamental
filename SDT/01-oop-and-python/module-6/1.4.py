# ============================================================
# ABSTRACT CLASS VS INTERFACE IN PYTHON
# ============================================================
#
# Python does not have a separate "interface" keyword.
# Interfaces are commonly created using ABC (Abstract Base Class)
# and abstract methods.
#
# Abstract Class:
# - Can contain abstract methods.
# - Can also contain normal/concrete methods.
# - Can contain attributes and a constructor.
#
# Interface:
# - Mainly defines a set of methods that a class must implement.
# - In Python, we can create an interface-like structure using
#   an abstract class containing only abstract methods.
# ============================================================


from abc import ABC, abstractmethod

# ============================================================
# 1. ABSTRACT CLASS
# ============================================================


class BankAccount(ABC):

    # Constructor
    # An abstract class can have attributes.
    def __init__(self, holder_name, balance):
        self.holder_name = holder_name
        self.balance = balance

    # Abstract method
    # Child classes MUST implement this method.
    @abstractmethod
    def calculate_interest(self):
        pass

    # Concrete/normal method
    # An abstract class can contain normal methods.
    def show_account_info(self):
        print("Account Holder:", self.holder_name)
        print("Balance:", self.balance)


# Child class
class SavingsAccount(BankAccount):

    # Implementing the abstract method
    def calculate_interest(self):
        return self.balance * 0.05


# Creating an object of the child class
account = SavingsAccount("Rahim", 10000)

account.show_account_info()

interest = account.calculate_interest()
print("Interest:", interest)


# ============================================================
# 2. INTERFACE-LIKE CLASS
# ============================================================
#
# Python does not have a separate interface keyword.
#
# We can create an interface-like class using ABC where
# all methods are abstract.
#
# The interface only defines WHAT a class must do.
# The implementing class defines HOW it does it.
# ============================================================


class PaymentInterface(ABC):

    # Abstract method
    @abstractmethod
    def pay(self, amount):
        pass

    # Abstract method
    @abstractmethod
    def refund(self, amount):
        pass


# ============================================================
# IMPLEMENTING THE INTERFACE
# ============================================================


class CreditCardPayment(PaymentInterface):

    # Implementing pay()
    def pay(self, amount):
        print(f"Paid {amount} using Credit Card.")

    # Implementing refund()
    def refund(self, amount):
        print(f"Refunded {amount} to Credit Card.")


class BkashPayment(PaymentInterface):

    # Implementing pay()
    def pay(self, amount):
        print(f"Paid {amount} using bKash.")

    # Implementing refund()
    def refund(self, amount):
        print(f"Refunded {amount} to bKash.")


# Creating objects
credit_card = CreditCardPayment()
bkash = BkashPayment()


# Calling interface methods
credit_card.pay(500)
credit_card.refund(200)

print()

bkash.pay(1000)
bkash.refund(300)


# ============================================================
# ABSTRACT CLASS VS INTERFACE
# ============================================================
#
# ABSTRACT CLASS:
#
# class BankAccount(ABC):
#     - Can have attributes
#     - Can have constructor
#     - Can have normal methods
#     - Can have abstract methods
#
#
# INTERFACE-LIKE CLASS:
#
# class PaymentInterface(ABC):
#     - Mainly contains abstract methods
#     - Defines a contract
#     - Child classes must implement the methods
#
# ============================================================
