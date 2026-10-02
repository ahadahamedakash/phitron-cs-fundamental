class Menu:

    def __init__(self):
        self.items = []

    def add_menu_item(self, item):

        self.items.append(item)

    def find_item(self, item_name):

        for item in self.items:

            if item.name.lower() == item_name.lower():
                return item

        return None

    def remove_item(self, item_name):

        item = self.find_item(item_name)

        if item:

            self.items.remove(item)

            print(f"{item.name} removed from menu.")

        else:
            print("Item not found!")

    def show_menu(self):

        if not self.items:
            print("\nMenu is empty.")
            return

        print("\n========== MENU ==========")
        print(f"{'Name':<20}" f"{'Price':<10}" f"{'Stock':<10}")

        print("-" * 40)

        for item in self.items:

            print(f"{item.name:<20}" f"{item.price:<10.2f}" f"{item.stock:<10}")
