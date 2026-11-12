"""
(expression for item in iterable if condition)
"""

import random

sales = [random.randint(100, 999) for _ in range(900)]


total_s = sum(sale for sale in sales if sale > 900)

print(total_s)
