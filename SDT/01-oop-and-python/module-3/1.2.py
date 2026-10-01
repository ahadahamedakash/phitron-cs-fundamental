# ==========================================
# TUPLE METHODS & OPERATIONS
# ==========================================

# Tuple is an ordered collection of items.
# Tuples are IMMUTABLE.
# That means we cannot change, add, or remove
# individual items after creating a tuple.


numbers = (1, 3, 4, 5, 4, 9)


# ==========================================
# CREATING A TUPLE
# ==========================================

# 1. Normal tuple
numbers = (1, 2, 3, 4)

print(numbers)
# Output: (1, 2, 3, 4)


# 2. Tuple with different data types
data = (10, "hello", 3.14, True)

print(data)
# Output: (10, 'hello', 3.14, True)


# 3. Single-item tuple
# IMPORTANT: comma is required.

x = (5,)

print(x)
# Output: (5,)


# This is NOT a tuple:
x = 5

print(type(x))
# Output: <class 'int'>


# ==========================================
# INDEXING
# ==========================================

numbers = (10, 20, 30, 40, 50)


# 4. Access using index
print(numbers[0])
# Output: 10

print(numbers[2])
# Output: 30


# Negative indexing
print(numbers[-1])
# Output: 50

print(numbers[-2])
# Output: 40


# ==========================================
# SLICING
# ==========================================

numbers = (10, 20, 30, 40, 50)


# 5. Basic slicing
print(numbers[1:4])
# Output: (20, 30, 40)


# From beginning
print(numbers[:3])
# Output: (10, 20, 30)


# To the end
print(numbers[2:])
# Output: (30, 40, 50)


# Copy the whole tuple
print(numbers[:])
# Output: (10, 20, 30, 40, 50)


# ==========================================
# REVERSE
# ==========================================

numbers = (1, 2, 3, 4, 5)


# 6. Reverse using slicing
print(numbers[::-1])
# Output: (5, 4, 3, 2, 1)


# ==========================================
# TUPLE METHODS
# ==========================================

numbers = (1, 3, 4, 5, 4, 9)


# 7. count()
# Counts how many times a value appears.

print(numbers.count(4))
# Output: 2

print(numbers.count(10))
# Output: 0


# 8. index()
# Returns the index of the FIRST occurrence.

print(numbers.index(4))
# Output: 2


# If the value does not exist,
# index() raises a ValueError.

# print(numbers.index(10))
# ValueError


# ==========================================
# USEFUL BUILT-IN FUNCTIONS
# ==========================================

numbers = (1, 3, 4, 5, 4, 9)


# 9. len()
# Returns the number of items.

print(len(numbers))
# Output: 6


# 10. min()
# Returns the smallest value.

print(min(numbers))
# Output: 1


# 11. max()
# Returns the largest value.

print(max(numbers))
# Output: 9


# 12. sum()
# Adds all numeric values.

print(sum(numbers))
# Output: 26


# ==========================================
# MEMBERSHIP
# ==========================================

numbers = (1, 3, 4, 5, 4, 9)


# 13. "in"
# Checks whether an item exists.

print(4 in numbers)
# Output: True

print(10 in numbers)
# Output: False


# 14. "not in"

print(10 not in numbers)
# Output: True


# ==========================================
# LOOPING THROUGH A TUPLE
# ==========================================

numbers = (10, 20, 30, 40)


# 15. Loop through values

for num in numbers:
    print(num)

# Output:
# 10
# 20
# 30
# 40


# 16. Loop through indexes

for i in range(len(numbers)):
    print(numbers[i])

# Output:
# 10
# 20
# 30
# 40


# ==========================================
# IMMUTABLE
# ==========================================

numbers = (1, 2, 3)


# 17. Cannot change an item

# numbers[0] = 10

# This will give:
# TypeError: 'tuple' object does not support item assignment


# 18. Cannot append

# numbers.append(4)

# This will give:
# AttributeError:
# 'tuple' object has no attribute 'append'


# 19. Cannot remove

# numbers.remove(2)

# This will give:
# AttributeError:
# 'tuple' object has no attribute 'remove'


# ==========================================
# TUPLE CONCATENATION
# ==========================================

a = (1, 2, 3)
b = (4, 5, 6)


# 20. + operator
# Combines two tuples.

c = a + b

print(c)
# Output: (1, 2, 3, 4, 5, 6)


# ==========================================
# TUPLE REPETITION
# ==========================================

numbers = (1, 2)


# 21. * operator
# Repeats a tuple.

result = numbers * 3

print(result)
# Output: (1, 2, 1, 2, 1, 2)


# ==========================================
# TUPLE UNPACKING ⭐
# ==========================================

numbers = (10, 20, 30)


# 22. Assign tuple values to variables.

a, b, c = numbers

print(a)
# Output: 10

print(b)
# Output: 20

print(c)
# Output: 30


# Very useful in Competitive Programming.

a, b = (10, 20)

print(a, b)
# Output: 10 20


# ==========================================
# SWAPPING VARIABLES
# ==========================================

a = 10
b = 20


# 23. Python allows easy swapping.

a, b = b, a

print(a, b)
# Output: 20 10


# In C++ you normally need:
# temp = a;
# a = b;
# b = temp;


# ==========================================
# CONVERT LIST -> TUPLE
# ==========================================

numbers = [1, 2, 3, 4]

numbers_tuple = tuple(numbers)

print(numbers_tuple)
# Output: (1, 2, 3, 4)


# ==========================================
# CONVERT TUPLE -> LIST
# ==========================================

numbers = (1, 2, 3, 4)

numbers_list = list(numbers)

print(numbers_list)
# Output: [1, 2, 3, 4]


# ==========================================
# SORTING A TUPLE
# ==========================================

numbers = (5, 2, 9, 1, 4)


# 24. sorted()
# Returns a NEW LIST, not a tuple.

result = sorted(numbers)

print(result)
# Output: [1, 2, 4, 5, 9]


# To get a sorted tuple:

result = tuple(sorted(numbers))

print(result)
# Output: (1, 2, 4, 5, 9)


# Descending order:

result = tuple(sorted(numbers, reverse=True))

print(result)
# Output: (9, 5, 4, 2, 5)


# ==========================================
# ENUMERATE WITH TUPLE
# ==========================================

numbers = (10, 20, 30, 40)


# 25. enumerate()
# Gives both index and value.

for i, value in enumerate(numbers):
    print(i, value)

# Output:
# 0 10
# 1 20
# 2 30
# 3 40


# ==========================================
# NESTED TUPLE
# ==========================================

students = (("Rahim", 20), ("Karim", 21), ("Hasan", 19))


# 26. Access nested tuple

print(students[0])
# Output: ('Rahim', 20)

print(students[0][0])
# Output: Rahim

print(students[0][1])
# Output: 20


# Loop through nested tuple

for name, age in students:
    print(name, age)

# Output:
# Rahim 20
# Karim 21
# Hasan 19


# ==========================================
# TUPLE METHODS — QUICK SUMMARY
# ==========================================

# Tuple has only TWO main built-in methods:

# 1. count()
# numbers.count(value)

# 2. index()
# numbers.index(value)


# ==========================================
# MOST IMPORTANT TUPLE OPERATIONS ⭐
# ==========================================

# Create
# t = (1, 2, 3)


# Access
# t[0]


# Last item
# t[-1]


# Slice
# t[1:3]


# Reverse
# t[::-1]


# Length
# len(t)


# Minimum
# min(t)


# Maximum
# max(t)


# Sum
# sum(t)


# Count
# t.count(2)


# Find index
# t.index(2)


# Check existence
# 2 in t


# Loop
# for x in t:
#     print(x)


# Index loop
# for i in range(len(t)):
#     print(t[i])


# Enumerate
# for i, x in enumerate(t):
#     print(i, x)


# Tuple unpacking
# a, b, c = t


# Tuple -> List
# list(t)


# List -> Tuple
# tuple(numbers)


# Sort
# sorted(t)


# Sorted tuple
# tuple(sorted(t))


# Reverse
# t[::-1]


# Concatenate
# t1 + t2


# Repeat
# t * 3


# ==========================================
# IMPORTANT DIFFERENCE
# ==========================================

# LIST:
# numbers = [1, 2, 3]
# Mutable -> CAN change


# TUPLE:
# numbers = (1, 2, 3)
# Immutable -> CANNOT change


# Example:

numbers_list = [1, 2, 3]
numbers_list[0] = 100

print(numbers_list)
# Output: [100, 2, 3]


numbers_tuple = (1, 2, 3)

# numbers_tuple[0] = 100
# TypeError
