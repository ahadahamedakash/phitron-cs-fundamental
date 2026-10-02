from menu import Menu


class Restaurant:

    def __init__(self, name):

        self.name = name
        self.employees = []
        self.menu = Menu()

    def add_employee(self, employee):

        self.employees.append(employee)

    def view_employee(self):

        if not self.employees:
            print("\nNo employees found.")
            return

        print("\n========== EMPLOYEES ==========")

        for employee in self.employees:

            print(f"Name        : {employee.name}")
            print(f"Email       : {employee.email}")
            print(f"Phone       : {employee.phone}")
            print(f"Address     : {employee.address}")
            print(f"Age         : {employee.age}")
            print(f"Designation : {employee.designation}")
            print(f"Salary      : {employee.salary}")
            print("-" * 35)
