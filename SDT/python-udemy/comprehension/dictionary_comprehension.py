item_price_in_bdt = {
    "Coffee": 100,
    "Tea": 50,
    "Burger": 250,
    "Chicken Pizza": 450,
    "French Fries": 150,
    "Sandwich": 180,
    "Pasta": 300,
    "Fried Chicken": 220,
    "Cold Coffee": 180,
    "Chocolate Milkshake": 200,
    "Chicken Sandwich": 250,
}

in_usd = {item: round(price / 120, 2) for item, price in item_price_in_bdt.items()}

# in_usd = {item: f"{price / 120:.2f}" for item, price in item_price_in_bdt.items()}

# for item, price in in_usd.items():
#     print(f"{item}: ${price}")

print(in_usd)
