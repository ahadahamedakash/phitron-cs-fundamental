class Bus:
    def __init__(self, number, route, total_seats):
        self.number = number
        self.route = route
        self.total_seats = total_seats
        self.booked_seats = 0

    def available_seats(self):
        return self.total_seats - self.booked_seats

    def book_seat(self):
        if self.available_seats() > 0:
            self.booked_seats += 1
            return True

        return False


class Passenger:
    def __init__(self, name, phone, bus):
        self.name = name
        self.phone = phone
        self.bus = bus


class BusSystem:
    fare = 500

    def __init__(self):
        self.buses = []
        self.passengers = []

    def add_bus(self, admin, number, route, total_seats):
        if not admin.is_logged_in:
            print("You don't have permission to do this operation!")
            return False
        if self.find_bus(number) is not None:
            print("\n This bus is already added!")
            return False

        if total_seats <= 0:
            print("Total seats can't be less than or equal zero!")
            return False

        bus_data = Bus(number, route, total_seats)

        self.buses.append(bus_data)
        return True

    def find_bus(self, bus_number):
        if not self.buses:
            return None

        for bus in self.buses:
            if bus.number == bus_number:
                return bus

        return None

    def show_buses(self):
        if not self.buses:
            print("\nNo buses are available right now!\n")
            return

        print("\n--- Buses List ---\n")

        for bus in self.buses:
            print(f"Number          : {bus.number}")
            print(f"Route           : {bus.route}")
            print(f"Total seats     : {bus.total_seats}")
            print(f"Available seats : {bus.available_seats()}\n")

    def book_ticket(self, bus_number, name, phone):
        current_bus = self.find_bus(bus_number)

        if current_bus is None:
            print("\nBus not found!\n")
            return False

        if not current_bus.book_seat():
            print("\nNo seats are available\n")
            return False

        passenger = Passenger(name, phone, current_bus)
        self.passengers.append(passenger)

        print("\n--- Booking Details --- \n")

        print(f"Passenger Name  : {name}")
        print(f"Phone           : {phone}")
        print(f"Bus Number      : {current_bus.number}")
        print(f"Route           : {current_bus.route}")
        print(f"Fare            : ৳ {self.fare}")
        print("Status           : Confirmed\n")

        return True


class Admin:
    def __init__(self, username="admin", password="1234"):
        self.username = username
        self.password = password
        self.is_logged_in = False

    def login(self, username, password):
        if username == self.username and password == self.password:
            self.is_logged_in = True
            print("\nSuccessfully logged in!\n")
            return True

        print("\nUsername or password is invalid\n")
        return False

    def logout(self):
        self.is_logged_in = False
        print("\nSuccessfully logged out!\n")


def main():
    bus_system = BusSystem()
    admin = Admin()

    while True:
        print("\n--- Bus Ticket Booking System ---\n")

        print("1. Admin Login")
        print("2. Book Ticket")
        print("3. View Buses")
        print("4. Exit\n")

        choosen_number = input("\nPlease choose a number to continue: ")

        if choosen_number == "1":
            username = input("Username: ")
            password = input("Password: ")

            if admin.login(username, password):
                while admin.is_logged_in:
                    print("\n--- Admin Menu ---\n")
                    print("1. Add a bus")
                    print("2. View bus list")
                    print("3. Logout\n")

                    admins_choosen_number = input("\nEnter your choice: ")

                    if admins_choosen_number == "1":
                        number = input("Enter bus number: ")
                        route = input("Enter bus route: ")
                        seats = int(input("Enter total seats: "))

                        is_added = bus_system.add_bus(admin, number, route, seats)

                        if is_added:
                            print("\nBus added successfully!\n")

                    elif admins_choosen_number == "2":
                        bus_system.show_buses()

                    elif admins_choosen_number == "3":
                        admin.logout()

                    else:
                        print("\nInvalid number. Please choose from 1 to 3\n")

        elif choosen_number == "2":
            bus_number = input("Enter bus number: ")
            name = input("Enter passenger name: ")
            phone = input("Enter phone number: ")

            bus_system.book_ticket(bus_number, name, phone)

        elif choosen_number == "3":
            bus_system.show_buses()

        elif choosen_number == "4":
            break

        else:
            print("\nInvalid number. Please choose from 1 to 4.\n")


main()
