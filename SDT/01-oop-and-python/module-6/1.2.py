class Bank:
    # Constructor
    def __init__(self, holder_name, balance):
        # Public attribute
        # Can be accessed directly from outside the class
        self.holder_name = holder_name

        # Protected attribute
        # Convention: a single underscore (_) means protected
        # It should be accessed within the class or its child classes
        self._account_type = "Savings"

        # Private attribute
        # Convention: double underscore (__) means private
        # It cannot be accessed directly from outside the class
        self.__balance = balance

    # Public method
    # Can be called from anywhere
    def deposit(self, amount):
        self.__balance += amount
        print(f"Deposited: {amount}")

    # Public method
    def show_balance(self):
        print(f"Balance: {self.__balance}")


# Child class to demonstrate protected access
class PremiumBank(Bank):

    def show_account_type(self):
        # Protected member can be accessed inside the child class
        print(f"Account Type: {self._account_type}")


# Creating an object
account = Bank("Rahim", 5000)

# -------------------------------
# PUBLIC ACCESS
# -------------------------------

# Public attribute can be accessed directly
print("Holder Name:", account.holder_name)

# Public method can be called directly
account.deposit(1000)

# -------------------------------
# PROTECTED ACCESS
# -------------------------------

# Protected attributes use a single underscore (_).
# They are intended to be used inside the class
# and its child classes.

premium_account = PremiumBank("Karim", 10000)
premium_account.show_account_type()

# It is technically possible to access _account_type
# from outside, but it is discouraged by convention.
print("Protected Account Type:", premium_account._account_type)


# -------------------------------
# PRIVATE ACCESS
# -------------------------------

# Private attribute uses double underscore (__).
# It is intended to be accessed only inside the class.

account.show_balance()

# This will NOT work:
# print(account.__balance)

# Python name-mangles the private variable internally.
# You should normally use a public method such as show_balance()
# to access the private data.
