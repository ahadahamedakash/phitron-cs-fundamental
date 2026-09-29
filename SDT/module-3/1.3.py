# ==========================================
# SET METHODS & OPERATIONS
# ==========================================

# A set is an unordered collection of UNIQUE items.
# Sets do NOT allow duplicate values.
#
# Set:
# numbers = {1, 2, 3}
#
# IMPORTANT:
# {} creates an empty DICTIONARY, not an empty set.
#
# Empty set:
# numbers = set()


# ==========================================
# CREATING A SET
# ==========================================

numbers = {1, 2, 3, 4, 5}

print(numbers)
# Output: {1, 2, 3, 4, 5}


# Duplicate values are automatically removed.

numbers = {1, 2, 2, 3, 3, 3, 4}

print(numbers)
# Output: {1, 2, 3, 4}


# Empty set

empty_set = set()

print(empty_set)
# Output: set()


# ==========================================
# ADDING ITEMS
# ==========================================

numbers = {1, 2, 3}


# 1. add()
# Adds ONE item to the set.

numbers.add(4)

print(numbers)
# Output: {1, 2, 3, 4}


# Adding an existing value does nothing.

numbers.add(4)

print(numbers)
# Output: {1, 2, 3, 4}


# ==========================================
# ADDING MULTIPLE ITEMS
# ==========================================

numbers = {1, 2, 3}


# 2. update()
# Adds multiple items to the set.

numbers.update([4, 5, 6])

print(numbers)
# Output: {1, 2, 3, 4, 5, 6}


# update() can also take another set.

numbers.update({7, 8})

print(numbers)
# Output: {1, 2, 3, 4, 5, 6, 7, 8}


# ==========================================
# REMOVING ITEMS
# ==========================================

numbers = {1, 2, 3, 4, 5}


# 3. remove()
# Removes a specific item.
#
# If the item does NOT exist,
# remove() raises a KeyError.

numbers.remove(3)

print(numbers)
# Output: {1, 2, 4, 5}


# numbers.remove(10)
# KeyError


# 4. discard()
# Removes a specific item.
#
# If the item does NOT exist,
# discard() does NOT give an error.

numbers.discard(4)

print(numbers)
# Output: {1, 2, 5}


numbers.discard(10)

print(numbers)
# Output: {1, 2, 5}


# ==========================================
# POP
# ==========================================

numbers = {10, 20, 30, 40}


# 5. pop()
# Removes and returns an arbitrary item.
#
# IMPORTANT:
# Set is unordered, so you should NOT assume
# which item will be removed.

x = numbers.pop()

print(x)
print(numbers)


# ==========================================
# CLEAR
# ==========================================

numbers = {1, 2, 3, 4}


# 6. clear()
# Removes ALL items.

numbers.clear()

print(numbers)
# Output: set()


# ==========================================
# FINDING / CHECKING
# ==========================================

numbers = {1, 2, 3, 4, 5}


# 7. "in"
# Checks whether an item exists.

print(3 in numbers)
# Output: True

print(10 in numbers)
# Output: False


# 8. "not in"

print(10 not in numbers)
# Output: True


# ==========================================
# LENGTH
# ==========================================

numbers = {10, 20, 30, 40}


# 9. len()
# Returns the number of UNIQUE items.

print(len(numbers))
# Output: 4


# ==========================================
# SET UNION
# ==========================================

a = {1, 2, 3, 4}
b = {3, 4, 5, 6}


# 10. union()
# Combines both sets.
# Duplicate values appear only once.

result = a.union(b)

print(result)
# Output: {1, 2, 3, 4, 5, 6}


# Using | operator

result = a | b

print(result)
# Output: {1, 2, 3, 4, 5, 6}


# ==========================================
# SET INTERSECTION
# ==========================================

a = {1, 2, 3, 4}
b = {3, 4, 5, 6}


# 11. intersection()
# Returns items that exist in BOTH sets.

result = a.intersection(b)

print(result)
# Output: {3, 4}


# Using & operator

result = a & b

print(result)
# Output: {3, 4}


# ==========================================
# SET DIFFERENCE
# ==========================================

a = {1, 2, 3, 4}
b = {3, 4, 5, 6}


# 12. difference()
# Returns items that exist in A
# but NOT in B.

result = a.difference(b)

print(result)
# Output: {1, 2}


# Using - operator

result = a - b

print(result)
# Output: {1, 2}


# B - A

result = b - a

print(result)
# Output: {5, 6}


# ==========================================
# SYMMETRIC DIFFERENCE
# ==========================================

a = {1, 2, 3, 4}
b = {3, 4, 5, 6}


# 13. symmetric_difference()
# Returns items that are in either set,
# but NOT in both.

result = a.symmetric_difference(b)

print(result)
# Output: {1, 2, 5, 6}


# Using ^ operator

result = a ^ b

print(result)
# Output: {1, 2, 5, 6}


# ==========================================
# SUBSET
# ==========================================

a = {1, 2}
b = {1, 2, 3, 4}


# 14. issubset()
# Checks whether ALL items of A
# exist in B.

print(a.issubset(b))
# Output: True


# Using <=

print(a <= b)
# Output: True


# ==========================================
# SUPERSET
# ==========================================

a = {1, 2, 3, 4}
b = {1, 2}


# 15. issuperset()
# Checks whether A contains ALL items of B.

print(a.issuperset(b))
# Output: True


# Using >=

print(a >= b)
# Output: True


# ==========================================
# DISJOINT
# ==========================================

a = {1, 2, 3}
b = {4, 5, 6}


# 16. isdisjoint()
# Returns True if the sets have
# NO common items.

print(a.isdisjoint(b))
# Output: True


a = {1, 2, 3}
b = {3, 4, 5}

print(a.isdisjoint(b))
# Output: False


# ==========================================
# COPY
# ==========================================

numbers = {1, 2, 3}


# 17. copy()
# Creates a copy of the set.

new_numbers = numbers.copy()

print(new_numbers)
# Output: {1, 2, 3}


# ==========================================
# LOOPING THROUGH A SET
# ==========================================

numbers = {10, 20, 30, 40}


# 18. Loop through values

for num in numbers:
    print(num)

# IMPORTANT:
# Set is unordered.
# Do NOT depend on the order of output.


# ==========================================
# SET FROM LIST
# ==========================================

numbers = [1, 2, 2, 3, 3, 4, 4, 5]


# 19. Remove duplicates from a list

unique_numbers = set(numbers)

print(unique_numbers)
# Output: {1, 2, 3, 4, 5}


# ==========================================
# SET -> LIST
# ==========================================

numbers = {1, 2, 3, 4}

numbers_list = list(numbers)

print(numbers_list)
# Output: [1, 2, 3, 4]


# IMPORTANT:
# Set does not guarantee the order of elements.
# So the list order should not be relied upon.


# ==========================================
# LIST -> SET
# ==========================================

numbers = [1, 2, 2, 3, 3, 4]

numbers_set = set(numbers)

print(numbers_set)
# Output: {1, 2, 3, 4}


# ==========================================
# STRING -> SET
# ==========================================

text = "hello"

characters = set(text)

print(characters)
# Output contains unique characters.
# Example: {'h', 'e', 'l', 'o'}


# ==========================================
# SET OPERATIONS — EXAMPLE
# ==========================================

students_math = {"Rahim", "Karim", "Hasan"}
students_english = {"Karim", "Hasan", "Jamal"}


# Students in both subjects

both = students_math & students_english

print(both)
# Output: {'Karim', 'Hasan'}


# Students who are only in Math

only_math = students_math - students_english

print(only_math)
# Output: {'Rahim'}


# Students in at least one subject

all_students = students_math | students_english

print(all_students)
# Output: {'Rahim', 'Karim', 'Hasan', 'Jamal'}


# ==========================================
# SET COMPARISON
# ==========================================

a = {1, 2, 3}
b = {1, 2, 3}


# 20. Equality

print(a == b)
# Output: True


# 21. Not equal

print(a != {1, 2})
# Output: True


# ==========================================
# FROZENSET
# ==========================================

# A frozenset is an IMMUTABLE set.
#
# Normal set:
# s = {1, 2, 3}
#
# Frozen set:
# fs = frozenset([1, 2, 3])


fs = frozenset([1, 2, 3])

print(fs)
# Output: frozenset({1, 2, 3})


# You cannot add or remove items from a frozenset.

# fs.add(4)
# AttributeError


# ==========================================
# IMPORTANT DIFFERENCE
# ==========================================

# LIST:
# numbers = [1, 2, 2, 3]
# Allows duplicates
# Ordered
# Can be changed


# TUPLE:
# numbers = (1, 2, 2, 3)
# Allows duplicates
# Ordered
# Cannot be changed


# SET:
# numbers = {1, 2, 2, 3}
# Removes duplicates
# Unordered
# Can be changed


# ==========================================
# SET METHODS — QUICK SUMMARY
# ==========================================

# Add one item
# s.add(x)


# Add multiple items
# s.update(iterable)


# Remove item — error if not found
# s.remove(x)


# Remove item — no error if not found
# s.discard(x)


# Remove arbitrary item
# s.pop()


# Remove everything
# s.clear()


# Copy
# s.copy()


# Number of items
# len(s)


# Check existence
# x in s


# Union
# s1.union(s2)
# s1 | s2


# Intersection
# s1.intersection(s2)
# s1 & s2


# Difference
# s1.difference(s2)
# s1 - s2


# Symmetric difference
# s1.symmetric_difference(s2)
# s1 ^ s2


# Subset
# s1.issubset(s2)
# s1 <= s2


# Superset
# s1.issuperset(s2)
# s1 >= s2


# Disjoint
# s1.isdisjoint(s2)


# ==========================================
# MOST IMPORTANT FOR COMPETITIVE PROGRAMMING ⭐
# ==========================================

# Create set
# s = {1, 2, 3}


# Empty set
# s = set()


# Add
# s.add(x)


# Remove
# s.remove(x)


# Safe remove
# s.discard(x)


# Check existence
# if x in s:
#     ...


# Number of unique values
# len(s)


# Remove duplicates from list
# unique = set(numbers)


# Union
# a | b


# Intersection
# a & b


# Difference
# a - b


# Symmetric difference
# a ^ b


# Loop
# for x in s:
#     print(x)


# Set -> List
# list(s)


# List -> Set
# set(numbers)


# ==========================================
# ⭐ MOST IMPORTANT CONCEPT
# ==========================================

# Sets are especially useful when you need:
#
# 1. UNIQUE values
# 2. FAST membership checking
# 3. Removing duplicates
# 4. Union / Intersection / Difference
#
# Example:

numbers = [1, 2, 2, 3, 4, 4, 5]

unique = set(numbers)

print(unique)
# Output: {1, 2, 3, 4, 5}

# Check quickly:
if 3 in unique:
    print("Found")
# Output: Found
