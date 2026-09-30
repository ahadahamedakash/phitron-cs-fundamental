class Product:
    def show_info(self):
        print("This is a product.")


class ElectronicProduct(Product):
    def show_info(self):
        # Call parent method
        super().show_info()

        # Add child-specific behavior
        print("This is an electronic product.")


laptop = ElectronicProduct()

laptop.show_info()
