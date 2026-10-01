class Product:
    def __init__(self, product_id, name, price, quantity):
        self.product_id = product_id
        self.name = name
        self.price = price
        self.quantity = quantity


class Shop:
    def __init__(self, shop_name):
        self.shop_name = shop_name
        self.products = []

    def add_product(self, product):
        self.products.append(product)
        print(f"{product.name} has been added to the shop.")

    def buy_product(self, product_id, quantity):
        for product in self.products:
            if product.product_id == product_id:
                if product.quantity >= quantity:
                    product.quantity -= quantity
                    total_price = product.price * quantity

                    print("Congratulations!")
                    print(f"You successfully bought {quantity} " f"{product.name}.")
                    print(f"Total Price: {total_price}")

                    return

                else:
                    print(
                        "Sorry! The product is not available "
                        "in the requested quantity."
                    )
                    return

        print("Sorry! This product is not available.")


product1 = Product(101, "Laptop", 80000, 5)
product2 = Product(102, "Mobile Phone", 30000, 10)
product3 = Product(103, "Headphone", 3000, 2)

shop = Shop("ABC Electronics")

shop.add_product(product1)
shop.add_product(product2)
shop.add_product(product3)


print("\n--- Buying Product ---")

shop.buy_product(101, 1)

print("\n--- Buying Another Product ---")

shop.buy_product(102, 2)

print("\n--- Trying to Buy Unavailable Product ---")

shop.buy_product(999, 1)

print("\n--- Trying to Buy More Than Available ---")

shop.buy_product(103, 5)
