"""
{expression for item in iterable if condition}
"""

favorite_coffee = [
    "Cold Coffee",
    "Hot Coffee",
    "Black Coffee",
    "Hot Coffee",
    "Expresso",
    "Cappuccino",
    "Expresso",
]

unique_coffee = {coff for coff in favorite_coffee}  # will return unique coffee list

print(unique_coffee)

""""""

numbers = [5, 2, 8, 1, 10, 3, 15, 7, 20, 4, 5, 2, 8, 1, 10, 3, 15, 7, 20, 4]

"""
unique_numbers = {num for num in numbers}

sorted_numbers = sorted(unique_numbers)
"""

sorted_numbers = sorted({num for num in numbers})

print(sorted_numbers)

""""""

recipes = {
    "Cold Coffee": ["Coffee Bean", "Ice Cube", "Milk", "Sugar", "Chocolate Syrup"],
    "Hot Coffee": ["Coffee Bean", "Hot Water", "Milk", "Sugar"],
    "Black Coffee": ["Coffee Bean", "Hot Water", "Brown Sugar", "Cinnamon"],
    "Cappuccino": ["Espresso", "Steamed Milk", "Milk Foam", "Cocoa Powder"],
    "Espresso": ["Espresso Coffee Beans", "Hot Water", "Coffee Crema", "Brown Sugar"],
}

with_hot_water = {
    coffee for coffee, ingredients in recipes.items() if "Hot Water" in ingredients
}

# ingreditnes_with_hot_water = [
#     ingredients for ingredients in recipes.values() if "Hot Water" in ingredients
# ]

print(with_hot_water)
# print(ingreditnes_with_hot_water)

"""
TASKS
"""

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

squared_even = {num**2 for num in numbers if num % 2 == 0}

print(squared_even)

names = ["ahad", "rahim", "karim", "ahad", "sabbir", "tamim", "rahim", "hasan"]

ans = {name.upper() for name in names if len(name) >= 5}

print(ans)

students = {
    "Ahad": [75, 80, 45, 90],
    "Rahim": [60, 35, 85, 70],
    "Karim": [40, 55, 65, 30],
    "Sabbir": [90, 95, 80, 85],
}

mar = {mark for k, v in students.items() for mark in v if mark >= 50}
print(mar)
