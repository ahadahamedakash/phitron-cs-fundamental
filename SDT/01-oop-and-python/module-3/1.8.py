# ============================================================
# LAMBDA FUNCTIONS
# ============================================================
#
# A lambda function is a small anonymous function.
#
# Normal function:
#
# def square(x):
#     return x * x
#
#
# Lambda:
#
# square = lambda x: x * x
#
#
# Syntax:
#
# lambda arguments: expression
#
# The expression is automatically returned.
#
# ============================================================


# ============================================================
# 1. BASIC LAMBDA
# ============================================================

square = lambda x: x * x

print(square(5))
# Output:
# 25


# Same thing using normal function:


def square2(x):
    return x * x


print(square2(5))
# Output:
# 25


# Lambda is useful when the function is very small.


# ============================================================
# 2. MULTIPLE ARGUMENTS
# ============================================================

add = lambda a, b: a + b

print(add(10, 20))
# Output:
# 30


multiply = lambda a, b: a * b

print(multiply(5, 4))
# Output:
# 20


# Three arguments:

total = lambda a, b, c: a + b + c

print(total(10, 20, 30))
# Output:
# 60


# ============================================================
# 3. LAMBDA WITH IF / ELSE ⭐⭐⭐
# ============================================================

# Syntax:
#
# lambda x: value_if_true if condition else value_if_false


check_even = lambda x: "Even" if x % 2 == 0 else "Odd"

print(check_even(10))
# Output:
# Even

print(check_even(7))
# Output:
# Odd


# Find maximum:

maximum = lambda a, b: a if a > b else b

print(maximum(10, 20))
# Output:
# 20


# ============================================================
# 4. LAMBDA WITH map() ⭐⭐⭐
# ============================================================

# map() applies a function to every item.

numbers = [1, 2, 3, 4, 5]

squares = list(map(lambda x: x * x, numbers))

print(squares)
# Output:
# [1, 4, 9, 16, 25]


# Without lambda:


def square(x):
    return x * x


squares = list(map(square, numbers))

print(squares)
# Output:
# [1, 4, 9, 16, 25]


# ============================================================
# 5. map() WITH STRING TO INTEGER ⭐⭐⭐
# ============================================================

numbers = ["10", "20", "30"]

numbers = list(map(int, numbers))

print(numbers)
# Output:
# [10, 20, 30]


# This is very common in Competitive Programming:
#
# numbers = list(map(int, input().split()))


# ============================================================
# 6. map() WITH TWO LISTS
# ============================================================

a = [1, 2, 3]
b = [10, 20, 30]

result = list(map(lambda x, y: x + y, a, b))

print(result)
# Output:
# [11, 22, 33]


# ============================================================
# 7. LAMBDA WITH filter() ⭐⭐⭐
# ============================================================

# filter() keeps items for which
# the function returns True.

numbers = [1, 2, 3, 4, 5, 6]

even = list(filter(lambda x: x % 2 == 0, numbers))

print(even)
# Output:
# [2, 4, 6]


# Odd numbers:

odd = list(filter(lambda x: x % 2 != 0, numbers))

print(odd)
# Output:
# [1, 3, 5]


# Numbers greater than 3:

result = list(filter(lambda x: x > 3, numbers))

print(result)
# Output:
# [4, 5, 6]


# ============================================================
# 8. LAMBDA WITH sorted() ⭐⭐⭐
# ============================================================

numbers = [5, 2, 9, 1, 7]

result = sorted(numbers, key=lambda x: x)

print(result)
# Output:
# [1, 2, 5, 7, 9]


# ============================================================
# 9. SORT BY SECOND VALUE ⭐⭐⭐
# ============================================================

students = [("Rahim", 80), ("Karim", 95), ("Hasan", 70)]


# Sort according to marks.

result = sorted(students, key=lambda x: x[1])

print(result)

# Output:
# [
#     ('Hasan', 70),
#     ('Rahim', 80),
#     ('Karim', 95)
# ]


# x[0] -> name
# x[1] -> marks


# ============================================================
# 10. SORT DESCENDING
# ============================================================

students = [("Rahim", 80), ("Karim", 95), ("Hasan", 70)]

result = sorted(students, key=lambda x: x[1], reverse=True)

print(result)

# Output:
# [
#     ('Karim', 95),
#     ('Rahim', 80),
#     ('Hasan', 70)
# ]


# ============================================================
# 11. SORT DICTIONARY ITEMS ⭐⭐⭐
# ============================================================

marks = {"Rahim": 80, "Karim": 95, "Hasan": 70}


# items() gives:
#
# ("Rahim", 80)
# ("Karim", 95)
# ("Hasan", 70)


result = sorted(marks.items(), key=lambda x: x[1])

print(result)

# Output:
# [
#     ('Hasan', 70),
#     ('Rahim', 80),
#     ('Karim', 95)
# ]


# ============================================================
# 12. SORT DICTIONARY BY KEY
# ============================================================

marks = {"Rahim": 80, "Karim": 95, "Hasan": 70}

result = sorted(marks.items(), key=lambda x: x[0])

print(result)

# Output:
# [
#     ('Hasan', 70),
#     ('Karim', 95),
#     ('Rahim', 80)
# ]


# ============================================================
# 13. min() WITH LAMBDA ⭐⭐⭐
# ============================================================

students = [("Rahim", 80), ("Karim", 95), ("Hasan", 70)]


minimum = min(students, key=lambda x: x[1])

print(minimum)
# Output:
# ('Hasan', 70)


# ============================================================
# 14. max() WITH LAMBDA
# ============================================================

maximum = max(students, key=lambda x: x[1])

print(maximum)
# Output:
# ('Karim', 95)


# ============================================================
# 15. SORT STRINGS BY LENGTH ⭐⭐⭐
# ============================================================

words = ["python", "cat", "elephant", "dog"]


result = sorted(words, key=lambda x: len(x))

print(result)

# Output:
# ['cat', 'dog', 'python', 'elephant']


# ============================================================
# 16. SORT BY LENGTH DESCENDING
# ============================================================

result = sorted(words, key=lambda x: len(x), reverse=True)

print(result)

# Output:
# ['elephant', 'python', 'cat', 'dog']


# ============================================================
# 17. SORT BY MULTIPLE CONDITIONS ⭐⭐⭐
# ============================================================

students = [("Rahim", 80), ("Karim", 80), ("Hasan", 70), ("Jamal", 95)]


# Sort by:
#
# 1. Marks
# 2. Then name


result = sorted(students, key=lambda x: (x[1], x[0]))

print(result)

# Output:
# [
#     ('Hasan', 70),
#     ('Karim', 80),
#     ('Rahim', 80),
#     ('Jamal', 95)
# ]


# ============================================================
# 18. REVERSE SORT WITH MULTIPLE VALUES
# ============================================================

students = [("Rahim", 80), ("Karim", 80), ("Hasan", 70), ("Jamal", 95)]


# Both are descending:

result = sorted(students, key=lambda x: (-x[1], x[0]))

print(result)

# Output:
# [
#     ('Jamal', 95),
#     ('Karim', 80),
#     ('Rahim', 80),
#     ('Hasan', 70)
# ]


# ============================================================
# 19. LAMBDA WITH reduce()
# ============================================================

from functools import reduce

numbers = [1, 2, 3, 4]


# Add all numbers:

result = reduce(lambda a, b: a + b, numbers)

print(result)
# Output:
# 10


# Multiply all numbers:

result = reduce(lambda a, b: a * b, numbers)

print(result)
# Output:
# 24


# ============================================================
# 20. LAMBDA WITH CONDITIONAL
# ============================================================

numbers = [1, 2, 3, 4, 5]


result = list(map(lambda x: x * 2 if x % 2 == 0 else x, numbers))

print(result)

# Output:
# [1, 4, 3, 8, 5]


# Even numbers are multiplied by 2.
# Odd numbers stay unchanged.


# ============================================================
# 21. LAMBDA WITH filter() AND map()
# ============================================================

numbers = [1, 2, 3, 4, 5, 6]


# Step 1:
# Keep even numbers.
#
# Step 2:
# Square them.

result = list(map(lambda x: x * x, filter(lambda x: x % 2 == 0, numbers)))

print(result)

# Output:
# [4, 16, 36]


# ============================================================
# 22. LAMBDA WITH DICTIONARY
# ============================================================

students = {"Rahim": 80, "Karim": 95, "Hasan": 70}


# Find student with highest marks:

best = max(students, key=lambda name: students[name])

print(best)
# Output:
# Karim


# Get the highest marks:

highest = max(students.values())

print(highest)
# Output:
# 95


# ============================================================
# 23. LAMBDA WITH LIST OF DICTIONARIES ⭐⭐⭐
# ============================================================

students = [
    {"name": "Rahim", "marks": 80},
    {"name": "Karim", "marks": 95},
    {"name": "Hasan", "marks": 70},
]


# Sort by marks:

result = sorted(students, key=lambda x: x["marks"])

print(result)

# Output:
# [
#     {'name': 'Hasan', 'marks': 70},
#     {'name': 'Rahim', 'marks': 80},
#     {'name': 'Karim', 'marks': 95}
# ]


# Sort by name:

result = sorted(students, key=lambda x: x["name"])

print(result)


# ============================================================
# 24. LAMBDA VS NORMAL FUNCTION
# ============================================================


# Normal function:


def add(a, b):
    return a + b


print(add(5, 10))


# Lambda:

add = lambda a, b: a + b

print(add(5, 10))


# Both produce:
# 15


# Use normal def when:
#
# - Function is large
# - Function has multiple statements
# - Function needs documentation
# - Function will be reused many times
#
#
# Use lambda when:
#
# - Function is very small
# - You need a function temporarily
# - Using map(), filter(), sorted(), min(), max()


# ============================================================
# 25. LAMBDA CANNOT CONTAIN NORMAL STATEMENTS
# ============================================================


# Lambda is designed for a SINGLE expression.

square = lambda x: x * x

print(square(5))


# This is NOT valid:
#
# square = lambda x:
#     y = x * x
#     return y
#
#
# For multiple statements, use def.


# ============================================================
# 26. LAMBDA WITH TERNARY OPERATOR
# ============================================================


absolute = lambda x: x if x >= 0 else -x

print(absolute(-10))
# Output:
# 10

print(absolute(10))
# Output:
# 10


# ============================================================
# 27. LAMBDA WITH AND / OR
# ============================================================


# Return the smaller value:

minimum = lambda a, b: a if a < b else b

print(minimum(10, 20))
# Output:
# 10


# Return the larger value:

maximum = lambda a, b: a if a > b else b

print(maximum(10, 20))
# Output:
# 20


# ============================================================
# 28. LAMBDA IN LIST COMPREHENSION
# ============================================================


functions = [lambda x: x + 1, lambda x: x + 2, lambda x: x + 3]


for function in functions:
    print(function(10))

# Output:
# 11
# 12
# 13


# ============================================================
# 29. COMMON COMPETITIVE PROGRAMMING USE ⭐⭐⭐
# ============================================================


# Sort pairs by second value:

pairs = [(1, 5), (2, 3), (4, 1)]

pairs.sort(key=lambda x: x[1])

print(pairs)

# Output:
# [(4, 1), (2, 3), (1, 5)]


# ============================================================
# 30. VERY COMMON CP PATTERN ⭐⭐⭐
# ============================================================


# Sort:
# First by first value
# Then by second value

pairs = [(2, 3), (1, 5), (2, 1), (1, 2)]

pairs.sort(key=lambda x: (x[0], x[1]))

print(pairs)

# Output:
# [(1, 2), (1, 5), (2, 1), (2, 3)]


# ============================================================
# 31. ANOTHER IMPORTANT CP PATTERN ⭐⭐⭐
# ============================================================


# Sort by first value ascending
# and second value descending.

pairs = [(1, 5), (1, 2), (2, 3), (2, 8)]


pairs.sort(key=lambda x: (x[0], -x[1]))

print(pairs)

# Output:
# [
#     (1, 5),
#     (1, 2),
#     (2, 8),
#     (2, 3)
# ]


# ============================================================
# 32. KEY IDEA TO REMEMBER ⭐⭐⭐
# ============================================================

# lambda x: x * 2
#
# Means:
#
# "Take x and return x * 2."


# lambda a, b: a + b
#
# Means:
#
# "Take a and b and return a + b."


# lambda x: len(x)
#
# Means:
#
# "Take x and return its length."


# lambda x: x[1]
#
# Means:
#
# "Take x and return its second item."


# ============================================================
# 33. MOST IMPORTANT FUNCTIONS USED WITH LAMBDA
# ============================================================

# map()
# -> Transform every item
#
# map(lambda x: x * 2, numbers)


# filter()
# -> Keep items satisfying a condition
#
# filter(lambda x: x % 2 == 0, numbers)


# sorted()
# -> Sort using a custom rule
#
# sorted(numbers, key=lambda x: x)


# min()
# -> Find minimum using a custom rule
#
# min(items, key=lambda x: x[1])


# max()
# -> Find maximum using a custom rule
#
# max(items, key=lambda x: x[1])


# reduce()
# -> Repeatedly combine items
#
# reduce(lambda a, b: a + b, numbers)


# ============================================================
# 34. QUICK SUMMARY ⭐⭐⭐
# ============================================================

# Basic:
#
# f = lambda x: x * x


# Multiple arguments:
#
# f = lambda a, b: a + b


# Condition:
#
# f = lambda x: "Even" if x % 2 == 0 else "Odd"


# map:
#
# list(map(lambda x: x * 2, numbers))


# filter:
#
# list(filter(lambda x: x % 2 == 0, numbers))


# sorted:
#
# sorted(items, key=lambda x: x[1])


# Reverse sorted:
#
# sorted(items, key=lambda x: x[1], reverse=True)


# Multiple sorting:
#
# sorted(items, key=lambda x: (x[0], x[1]))


# Descending second value:
#
# sorted(items, key=lambda x: (x[0], -x[1]))


# min:
#
# min(items, key=lambda x: x[1])


# max:
#
# max(items, key=lambda x: x[1])


# reduce:
#
# reduce(lambda a, b: a + b, numbers)


# ============================================================
# ⭐⭐⭐ FOR COMPETITIVE PROGRAMMING
# ============================================================

# The MOST important lambda pattern to memorize:
#
#
# pairs.sort(key=lambda x: x[1])
#
# -> Sort pairs according to second element.
#
#
# pairs.sort(key=lambda x: -x[1])
#
# -> Sort according to second element descending.
#
#
# pairs.sort(key=lambda x: (x[0], x[1]))
#
# -> Sort by first, then second.
#
#
# pairs.sort(key=lambda x: (x[0], -x[1]))
#
# -> First ascending, second descending.
#
#
# This pattern becomes extremely useful
# in sorting problems.
