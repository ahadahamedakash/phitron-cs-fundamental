from abc import ABC
from order import Order


class User(ABC):

    def __init__(self, name, email, phone, address):
        self.name = name
        self.email = email
        self.phone = phone
        self.address = address


class Customer(User):

    def __init__(self, name, email, phone, address):
        super().__init__(name, email, phone, address)
        self.cart = Order()

    def view_menu(self, restaurant):
        restaurant.menu.show_menu()

    def add_to_cart(self, restaurant, item_name, quantity):
        item = restaurant.menu.find_item(item_name)

        if not item:
            print("Item not found!")
            return

        if quantity <= 0:
            print("Quantity must be greater than 0.")
            return

        if quantity > item.stock:
            print(f"Only {item.stock} {item.name} available in stock.")
            return

        self.cart.add_item(item, quantity)
        print(f"{quantity} x {item.name} added to cart.")

    def view_cart(self):
        self.cart.show_cart()

    def remove_from_cart(self, item_name):
        item = self.cart.find_item(item_name)

        if item:
            self.cart.remove(item)
            print(f"{item.name} removed from cart.")
        else:
            print("Item not found in cart.")

    def checkout(self):
        self.cart.checkout()


class Employee(User):

    def __init__(self, name, email, phone, address, age, designation, salary):
        super().__init__(name, email, phone, address)

        self.age = age
        self.designation = designation
        self.salary = salary


class Admin(User):

    def __init__(self, name, email, phone, address):
        super().__init__(name, email, phone, address)

    def add_employee(self, restaurant, employee):

        restaurant.add_employee(employee)

        print(f"{employee.name} added successfully.")

    def view_employee(self, restaurant):

        restaurant.view_employee()

    def add_new_item(self, restaurant, item):

        restaurant.menu.add_menu_item(item)

        print(f"{item.name} added to menu.")

    def remove_item(self, restaurant, item_name):

        restaurant.menu.remove_item(item_name)
