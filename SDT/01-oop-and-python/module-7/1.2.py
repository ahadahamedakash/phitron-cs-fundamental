# ============================================================
# GETTER AND SETTER IN PYTHON
# ============================================================
#
# Getter:
#   A getter is used to READ the value of an attribute.
#
# Setter:
#   A setter is used to CHANGE/UPDATE the value of an attribute.
#
# Python commonly uses the @property decorator to create
# getters and setters.
# ============================================================


class BankAccount:

    def __init__(self, holder_name, balance):

        # Public attribute
        self.holder_name = holder_name

        # Private attribute
        # We don't want outside code to directly modify this.
        self.__balance = balance

    # ========================================================
    # GETTER
    # ========================================================
    #
    # @property makes this method behave like an attribute.
    #
    # When we write:
    #
    #     account.balance
    #
    # Python automatically calls:
    #
    #     balance()
    #
    # ========================================================

    @property
    def balance(self):

        # Return the private balance
        return self.__balance

    # ========================================================
    # SETTER
    # ========================================================
    #
    # @balance.setter connects this method to the "balance"
    # property.
    #
    # When we write:
    #
    #     account.balance = 8000
    #
    # Python automatically calls:
    #
    #     balance(8000)
    #
    # ========================================================

    @balance.setter
    def balance(self, amount):

        # Validate the new value before changing it
        if amount >= 0:

            self.__balance = amount

            print("Balance updated successfully.")

        else:

            print("Error: Balance cannot be negative.")


# ============================================================
# CREATE OBJECT
# ============================================================

account = BankAccount("Rahim", 5000)


# ============================================================
# SAMPLE FLOW 1: GETTER
# ============================================================

print("Current Balance:", account.balance)


# HOW THE GETTER WORKS:
#
# Step 1:
#     account.balance
#
# Step 2:
#     Python sees that "balance" is a @property.
#
# Step 3:
#     Python automatically calls:
#
#     account.balance()
#
# Step 4:
#     The getter executes:
#
#     return self.__balance
#
# Step 5:
#     The value 5000 is returned.
#
#
# FLOW:
#
#     account.balance
#            |
#            v
#     @property balance()
#            |
#            v
#     return self.__balance
#            |
#            v
#          5000
# ============================================================


# ============================================================
# SAMPLE FLOW 2: SETTER
# ============================================================

account.balance = 8000


# HOW THE SETTER WORKS:
#
# Step 1:
#     account.balance = 8000
#
# Step 2:
#     Python sees that "balance" has a @balance.setter.
#
# Step 3:
#     Python automatically calls:
#
#     balance(8000)
#
# Step 4:
#     The setter receives:
#
#     amount = 8000
#
# Step 5:
#     It checks:
#
#     if amount >= 0
#
# Step 6:
#     The condition is TRUE.
#
# Step 7:
#     The private variable is updated:
#
#     self.__balance = 8000
#
#
# FLOW:
#
#     account.balance = 8000
#              |
#              v
#     @balance.setter
#              |
#              v
#        amount = 8000
#              |
#              v
#       amount >= 0 ?
#          /       \
#        YES        NO
#         |          |
#         v          v
#   Update balance  Error
#         |
#         v
#   __balance = 8000
# ============================================================


# ============================================================
# CHECK THE NEW BALANCE
# ============================================================

print("New Balance:", account.balance)


# ============================================================
# SAMPLE FLOW 3: INVALID VALUE
# ============================================================

account.balance = -5000


# FLOW:
#
#     account.balance = -5000
#              |
#              v
#     @balance.setter
#              |
#              v
#        amount = -5000
#              |
#              v
#       amount >= 0 ?
#              |
#             NO
#              |
#              v
#   "Balance cannot be negative"
#
# The balance remains 8000 because the invalid value
# was NOT assigned to self.__balance.
# ============================================================


print("Final Balance:", account.balance)


# ============================================================
# COMPLETE GETTER + SETTER FLOW
# ============================================================
#
#
#                OBJECT
#                   |
#                   |
#          account.balance
#                   |
#                   v
#              ┌─────────┐
#              │ GETTER  │
#              └─────────┘
#                   |
#                   v
#          self.__balance
#                   |
#                   v
#                Return
#
#
#
#          account.balance = 8000
#                   |
#                   v
#              ┌─────────┐
#              │ SETTER  │
#              └─────────┘
#                   |
#                   v
#             Validate value
#                   |
#              ┌────┴────┐
#              |         |
#             Valid    Invalid
#              |         |
#              v         v
#       Update balance   Error
#
# ============================================================
#
# KEY POINT:
#
# Getter → Used to READ the private data.
#
# Setter → Used to MODIFY the private data.
#
# @property → Creates the getter.
#
# @balance.setter → Creates the setter.
#
# Together, they provide controlled access to private data
# and are an important part of ENCAPSULATION.
# ============================================================
