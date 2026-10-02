class Order:

    def __init__(self):

        self.items = {}

    def add_item(self, item, quantity):

        if item in self.items:
            self.items[item] += quantity
        else:
            self.items[item] = quantity

    def find_item(self, item_name):

        for item in self.items:
            if item.name.lower() == item_name.lower():
                return item

        return None

    def remove(self, item):

        if item in self.items:
            del self.items[item]

    def total_price(self):

        return sum(item.price * quantity for item, quantity in self.items.items())

    def show_cart(self):

        if not self.items:
            print("\nCart is empty.")
            return

        print("\n========== YOUR CART ==========")
        print(f"{'Name':<20}{'Price':<10}{'Quantity':<10}{'Total'}")
        print("-" * 60)

        for item, quantity in self.items.items():

            total = item.price * quantity

            print(
                f"{item.name:<20}"
                f"{item.price:<10.2f}"
                f"{quantity:<10}"
                f"{total:.2f}"
            )

        print("-" * 60)
        print(f"Total Price: {self.total_price():.2f}")

    def checkout(self):

        if not self.items:
            print("\nCart is empty.")
            return

        for item, quantity in self.items.items():

            if quantity > item.stock:
                print(f"Not enough stock for {item.name}. " f"Available: {item.stock}")
                return

        for item, quantity in self.items.items():
            item.stock -= quantity

        print("\n========== ORDER PLACED ==========")

        for item, quantity in self.items.items():
            print(f"{item.name} x {quantity}")

        print(f"Total Price: {self.total_price():.2f}")
        print("Order placed successfully!")

        self.clear()

    def clear(self):
        self.items = {}
