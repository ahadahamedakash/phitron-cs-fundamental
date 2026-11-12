"""
[expression for item in iterable if condition ]
"""

menu = ["Cold Coffee", "Balck Coffee", "Cappuccino", "Expresso"]

coffee = [coff for coff in menu if "Coffee" in coff]
print(coffee)

len5 = [coff for coff in menu if len(coff) > 5]
print(len5)
