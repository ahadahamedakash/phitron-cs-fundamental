# ============================================================
# POLYMORPHISM IN PYTHON
# ============================================================
#
# Polymorphism means "many forms".
#
# In Object-Oriented Programming, polymorphism allows the same
# method name to perform different actions depending on the object.
#
# In this example:
# - BankAccount is the parent class.
# - SavingsAccount and CurrentAccount are child classes.
# - Both child classes have the same method: calculate_interest()
# - But each class implements the method differently.
# ============================================================


# Parent Class
class BankAccount:

    def __init__(self, holder_name, balance):
        self.holder_name = holder_name
        self.balance = balance

    # Common method
    def show_balance(self):
        print(f"{self.holder_name}'s Balance: {self.balance}")

    # This method will be overridden by child classes
    def calculate_interest(self):
        print("Interest calculation")


# ============================================================
# CHILD CLASS 1
# ============================================================


class SavingsAccount(BankAccount):

    # Method Overriding
    # The child class provides its own implementation
    # of calculate_interest().
    def calculate_interest(self):
        interest = self.balance * 0.05
        print(f"Savings Account Interest: {interest}")


# ============================================================
# CHILD CLASS 2
# ============================================================


class CurrentAccount(BankAccount):

    # Method Overriding
    # Same method name but different implementation.
    def calculate_interest(self):
        interest = self.balance * 0.02
        print(f"Current Account Interest: {interest}")


# ============================================================
# CREATING OBJECTS
# ============================================================

savings = SavingsAccount("Rahim", 10000)
current = CurrentAccount("Karim", 20000)


# ============================================================
# POLYMORPHISM
# ============================================================
#
# We can use the SAME method name:
#
# calculate_interest()
#
# But the result is different depending on the object.
# ============================================================

savings.calculate_interest()
current.calculate_interest()


# ============================================================
# POLYMORPHISM USING A FUNCTION
# ============================================================
#
# This function does not need to know whether the object is
# SavingsAccount or CurrentAccount.
#
# It simply calls calculate_interest().
# Python automatically calls the correct implementation.
# ============================================================


def show_interest(account):
    account.calculate_interest()


print()

show_interest(savings)
show_interest(current)


# ============================================================
# POLYMORPHISM USING A LOOP
# ============================================================
#
# We can store different types of objects in the same list.
# Both objects have calculate_interest().
# ============================================================

accounts = [SavingsAccount("Rahim", 10000), CurrentAccount("Karim", 20000)]

print()

for account in accounts:
    account.calculate_interest()


# ============================================================
# KEY POINTS
# ============================================================
#
# 1. Polymorphism means "many forms".
#
# 2. Different classes can have the same method name.
#
# 3. Method overriding is a common way to achieve polymorphism.
#
# 4. The same function can work with different types of objects.
#
# 5. Python determines which method to call based on the object.
# ============================================================
