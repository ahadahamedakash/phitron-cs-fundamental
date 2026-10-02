from menu import Menu
from food_item import FoodItem
from restaurant import Restaurant
from user import User, Customer, Admin, Employee
from order import Order


def create_employee():

    print("\n========== CREATE EMPLOYEE ==========")

    name = input("Name: ")
    email = input("Email: ")
    phone = input("Phone: ")
    address = input("Address: ")

    age = int(input("Age: "))
    designation = input("Designation: ")
    salary = float(input("Salary: "))

    return Employee(name, email, phone, address, age, designation, salary)


def create_food_item():

    print("\n========== CREATE FOOD ITEM ==========")

    name = input("Food name: ")
    price = float(input("Price: "))
    stock = int(input("Stock quantity: "))

    return FoodItem(name, price, stock)


def customer_menu(customer, restaurant):

    while True:

        print("\n========== CUSTOMER MENU ==========")
        print("1. View Menu")
        print("2. Add Item to Cart")
        print("3. View Cart")
        print("4. Remove Item from Cart")
        print("5. Checkout")
        print("6. Back")

        choice = input("Choose an option: ")

        if choice == "1":

            customer.view_menu(restaurant)

        elif choice == "2":

            customer.view_menu(restaurant)

            item_name = input("\nEnter item name: ")
            quantity = int(input("Enter quantity: "))

            customer.add_to_cart(restaurant, item_name, quantity)

        elif choice == "3":

            customer.view_cart()

        elif choice == "4":

            customer.view_cart()

            item_name = input("\nEnter item name to remove: ")

            customer.remove_from_cart(item_name)

        elif choice == "5":

            customer.view_cart()

            confirm = input("\nConfirm checkout? (y/n): ").lower()

            if confirm == "y":
                customer.checkout()

        elif choice == "6":

            break

        else:

            print("Invalid option!")


def admin_menu(admin, restaurant):

    while True:

        print("\n========== ADMIN MENU ==========")
        print("1. View Menu")
        print("2. Add Food Item")
        print("3. Remove Food Item")
        print("4. View Employees")
        print("5. Add Employee")
        print("6. Back")

        choice = input("Choose an option: ")

        if choice == "1":

            restaurant.menu.show_menu()

        elif choice == "2":

            item = create_food_item()

            admin.add_new_item(restaurant, item)

        elif choice == "3":

            restaurant.menu.show_menu()

            item_name = input("\nEnter item name to remove: ")

            admin.remove_item(restaurant, item_name)

        elif choice == "4":

            admin.view_employee(restaurant)

        elif choice == "5":

            employee = create_employee()

            admin.add_employee(restaurant, employee)

        elif choice == "6":

            break

        else:

            print("Invalid option!")


def main():

    print("===================================")
    print("     RESTAURANT MANAGEMENT SYSTEM")
    print("===================================")

    restaurant_name = input("Enter restaurant name: ")

    restaurant = Restaurant(restaurant_name)

    print("\nCreate Admin")

    admin_name = input("Admin name: ")
    admin_email = input("Admin email: ")
    admin_phone = input("Admin phone: ")
    admin_address = input("Admin address: ")

    admin = Admin(admin_name, admin_email, admin_phone, admin_address)

    print("\nAdd initial food items")

    while True:

        item = create_food_item()

        admin.add_new_item(restaurant, item)

        more = input("Add another item? (y/n): ").lower()

        if more != "y":
            break

    while True:

        print("\n===================================")
        print(f"        {restaurant.name}")
        print("===================================")

        print("1. Admin")
        print("2. Customer")
        print("3. Exit")

        choice = input("Choose an option: ")

        if choice == "1":

            admin_menu(admin, restaurant)

        elif choice == "2":

            print("\n========== CREATE CUSTOMER ==========")

            name = input("Name: ")
            email = input("Email: ")
            phone = input("Phone: ")
            address = input("Address: ")

            customer = Customer(name, email, phone, address)

            customer_menu(customer, restaurant)

        elif choice == "3":

            print("\nThank you for using the system!")
            break

        else:
            print("Invalid option!")


main()
