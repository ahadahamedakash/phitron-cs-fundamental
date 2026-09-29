# ==========================================
# DICTIONARY & DICTIONARY METHODS
# ==========================================

# A dictionary stores data in KEY : VALUE pairs.
#
# Syntax:
# dictionary = {
#     key: value,
#     key: value
# }
#
# Example:

student = {"name": "Rahim", "age": 20, "department": "CSE"}

print(student)
# Output:
# {'name': 'Rahim', 'age': 20, 'department': 'CSE'}


# ==========================================
# CREATING A DICTIONARY
# ==========================================

# 1. Empty dictionary

data = {}

print(data)
# Output: {}


# 2. Dictionary with values

person = {"name": "Karim", "age": 22, "city": "Dhaka"}

print(person)


# ==========================================
# ACCESSING VALUES
# ==========================================

person = {"name": "Karim", "age": 22, "city": "Dhaka"}


# 3. Access using key

print(person["name"])
# Output: Karim

print(person["age"])
# Output: 22


# IMPORTANT:
# If the key does not exist,
# person["unknown"] gives a KeyError.


# ==========================================
# get()
# ==========================================

# 4. get()
# Returns the value of a key.
#
# If the key does not exist,
# it returns None instead of giving an error.

person = {"name": "Karim", "age": 22}

print(person.get("name"))
# Output: Karim

print(person.get("city"))
# Output: None


# You can provide a default value.

print(person.get("city", "Not Found"))
# Output: Not Found


# ==========================================
# ADDING / UPDATING VALUES
# ==========================================

person = {"name": "Karim", "age": 22}


# 5. Add a new key-value pair

person["city"] = "Dhaka"

print(person)
# Output:
# {'name': 'Karim', 'age': 22, 'city': 'Dhaka'}


# 6. Update an existing value

person["age"] = 23

print(person)
# Output:
# {'name': 'Karim', 'age': 23, 'city': 'Dhaka'}


# IMPORTANT:
# If the key already exists -> value is UPDATED.
# If the key does not exist -> new key is ADDED.


# ==========================================
# update()
# ==========================================

person = {"name": "Karim", "age": 22}


# 7. update()
# Adds or updates multiple key-value pairs.

person.update({"age": 23, "city": "Dhaka"})

print(person)
# Output:
# {'name': 'Karim', 'age': 23, 'city': 'Dhaka'}


# ==========================================
# keys()
# ==========================================

person = {"name": "Karim", "age": 22, "city": "Dhaka"}


# 8. keys()
# Returns all keys.

print(person.keys())
# Output:
# dict_keys(['name', 'age', 'city'])


# Convert to list if needed:

print(list(person.keys()))
# Output:
# ['name', 'age', 'city']


# ==========================================
# values()
# ==========================================

# 9. values()
# Returns all values.

print(person.values())
# Output:
# dict_values(['Karim', 22, 'Dhaka'])


# Convert to list:

print(list(person.values()))
# Output:
# ['Karim', 22, 'Dhaka']


# ==========================================
# items()
# ==========================================

# 10. items()
# Returns key-value pairs.

print(person.items())
# Output:
# dict_items([
#     ('name', 'Karim'),
#     ('age', 22),
#     ('city', 'Dhaka')
# ])


# ==========================================
# LOOP THROUGH DICTIONARY
# ==========================================

person = {"name": "Karim", "age": 22, "city": "Dhaka"}


# 11. Loop through keys

for key in person:
    print(key)

# Output:
# name
# age
# city


# 12. Loop through values

for value in person.values():
    print(value)

# Output:
# Karim
# 22
# Dhaka


# 13. Loop through key-value pairs ⭐

for key, value in person.items():
    print(key, value)

# Output:
# name Karim
# age 22
# city Dhaka


# ==========================================
# CHECKING KEY EXISTENCE
# ==========================================

person = {"name": "Karim", "age": 22}


# 14. "in"
# Checks whether a KEY exists.

print("name" in person)
# Output: True

print("city" in person)
# Output: False


# IMPORTANT:
# "in" checks KEYS, not values.

print("Karim" in person)
# Output: False


# To check a value:

print("Karim" in person.values())
# Output: True


# ==========================================
# REMOVING ITEMS
# ==========================================

person = {"name": "Karim", "age": 22, "city": "Dhaka"}


# 15. pop()
# Removes a specific key
# and returns its value.

age = person.pop("age")

print(age)
# Output: 22

print(person)
# Output:
# {'name': 'Karim', 'city': 'Dhaka'}


# If the key does not exist:
# person.pop("salary")
# KeyError


# You can provide a default value:

result = person.pop("salary", 0)

print(result)
# Output: 0


# ==========================================
# popitem()
# ==========================================

person = {"name": "Karim", "age": 22, "city": "Dhaka"}


# 16. popitem()
# Removes and returns the LAST inserted
# key-value pair.

item = person.popitem()

print(item)
# Output:
# ('city', 'Dhaka')

print(person)
# Output:
# {'name': 'Karim', 'age': 22}


# ==========================================
# del
# ==========================================

person = {"name": "Karim", "age": 22, "city": "Dhaka"}


# 17. del
# Deletes a specific key-value pair.

del person["age"]

print(person)
# Output:
# {'name': 'Karim', 'city': 'Dhaka'}


# ==========================================
# clear()
# ==========================================

person = {"name": "Karim", "age": 22}


# 18. clear()
# Removes ALL key-value pairs.

person.clear()

print(person)
# Output: {}


# ==========================================
# copy()
# ==========================================

person = {"name": "Karim", "age": 22}


# 19. copy()
# Creates a copy of the dictionary.

new_person = person.copy()

print(new_person)
# Output:
# {'name': 'Karim', 'age': 22}


# ==========================================
# len()
# ==========================================

person = {"name": "Karim", "age": 22, "city": "Dhaka"}


# 20. len()
# Returns the number of key-value pairs.

print(len(person))
# Output: 3


# ==========================================
# SETDEFAULT()
# ==========================================

person = {"name": "Karim", "age": 22}


# 21. setdefault()
# Returns the value of a key.
#
# If the key does not exist,
# it creates the key with the given value.

print(person.setdefault("name", "Rahim"))
# Output: Karim

print(person)
# name remains Karim


print(person.setdefault("city", "Dhaka"))
# Output: Dhaka

print(person)
# Output:
# {'name': 'Karim', 'age': 22, 'city': 'Dhaka'}


# ==========================================
# FROMKEYS()
# ==========================================

# 22. fromkeys()
# Creates a dictionary from a list/tuple of keys.

keys = ["a", "b", "c"]

data = dict.fromkeys(keys, 0)

print(data)
# Output:
# {'a': 0, 'b': 0, 'c': 0}


# ==========================================
# DICTIONARY WITH LIST VALUES
# ==========================================

# A dictionary value can be a list.

student = {"name": "Rahim", "marks": [80, 90, 85]}

print(student["marks"])
# Output:
# [80, 90, 85]


print(student["marks"][0])
# Output:
# 80


# ==========================================
# NESTED DICTIONARY
# ==========================================

# A dictionary can contain another dictionary.

students = {
    "student1": {"name": "Rahim", "age": 20},
    "student2": {"name": "Karim", "age": 22},
}


print(students["student1"])
# Output:
# {'name': 'Rahim', 'age': 20}


print(students["student1"]["name"])
# Output:
# Rahim


print(students["student2"]["age"])
# Output:
# 22


# ==========================================
# DICTIONARY FROM TWO LISTS
# ==========================================

names = ["Rahim", "Karim", "Hasan"]
marks = [80, 90, 85]


# 23. zip()
# Combines corresponding items.

result = dict(zip(names, marks))

print(result)
# Output:
# {'Rahim': 80, 'Karim': 90, 'Hasan': 85}


# ==========================================
# FREQUENCY COUNT ⭐⭐⭐
# ==========================================

# Dictionary is VERY useful for counting
# how many times something appears.

numbers = [1, 2, 2, 3, 3, 3, 4]

freq = {}

for num in numbers:
    if num in freq:
        freq[num] += 1
    else:
        freq[num] = 1

print(freq)
# Output:
# {1: 1, 2: 2, 3: 3, 4: 1}


# ==========================================
# FREQUENCY COUNT — SHORTER VERSION
# ==========================================

numbers = [1, 2, 2, 3, 3, 3, 4]

freq = {}

for num in numbers:
    freq[num] = freq.get(num, 0) + 1

print(freq)
# Output:
# {1: 1, 2: 2, 3: 3, 4: 1}


# ==========================================
# CHARACTER FREQUENCY ⭐⭐⭐
# ==========================================

text = "banana"

freq = {}

for ch in text:
    freq[ch] = freq.get(ch, 0) + 1

print(freq)
# Output:
# {'b': 1, 'a': 3, 'n': 2}


# ==========================================
# DICTIONARY COMPREHENSION
# ==========================================

# 24. Create a dictionary using a loop
# in a single line.

numbers = [1, 2, 3, 4, 5]

squares = {x: x * x for x in numbers}

print(squares)
# Output:
# {1: 1, 2: 4, 3: 9, 4: 16, 5: 25}


# ==========================================
# SORTING DICTIONARY
# ==========================================

marks = {"Rahim": 80, "Karim": 95, "Hasan": 70}


# 25. sorted()
# Sort by keys by default.

print(sorted(marks))
# Output:
# ['Hasan', 'Karim', 'Rahim']


# Sort by values:

result = sorted(marks.items(), key=lambda x: x[1])

print(result)
# Output:
# [('Hasan', 70), ('Rahim', 80), ('Karim', 95)]


# Descending by value:

result = sorted(marks.items(), key=lambda x: x[1], reverse=True)

print(result)
# Output:
# [('Karim', 95), ('Rahim', 80), ('Hasan', 70)]


# ==========================================
# DICTIONARY KEYS MUST BE UNIQUE
# ==========================================

data = {"a": 10, "b": 20, "a": 50}

print(data)
# Output:
# {'a': 50, 'b': 20}


# The second "a" replaces the first value.


# ==========================================
# IMPORTANT DICTIONARY CONCEPT
# ==========================================

# Dictionary:
#
# key -> value
#
# Example:
#
# "name" -> "Rahim"
# "age"  -> 20
# "city" -> "Dhaka"


# Keys must be unique.


# ==========================================
# DICTIONARY METHODS — QUICK SUMMARY
# ==========================================

# Get value
# d.get(key)


# Get all keys
# d.keys()


# Get all values
# d.values()


# Get key-value pairs
# d.items()


# Add / update
# d[key] = value


# Update multiple values
# d.update({...})


# Remove by key
# d.pop(key)


# Remove last inserted item
# d.popitem()


# Remove all items
# d.clear()


# Copy
# d.copy()


# Add only if key doesn't exist
# d.setdefault(key, value)


# Create dictionary from keys
# dict.fromkeys(keys, value)


# Number of key-value pairs
# len(d)


# Check if key exists
# key in d


# Check if key does NOT exist
# key not in d


# ==========================================
# MOST IMPORTANT FOR COMPETITIVE PROGRAMMING ⭐
# ==========================================

# Create:
# freq = {}


# Add / update:
# freq[x] = value


# Check:
# if x in freq:
#     ...


# Get safely:
# freq.get(x, 0)


# Frequency counting:
# freq[x] = freq.get(x, 0) + 1


# Loop through keys:
# for key in d:
#     ...


# Loop through values:
# for value in d.values():
#     ...


# Loop through both:
# for key, value in d.items():
#     ...


# Check key:
# if key in d:
#     ...


# Remove:
# d.pop(key)


# ==========================================
# LIST vs TUPLE vs SET vs DICTIONARY
# ==========================================

# LIST
# numbers = [1, 2, 2, 3]
# Ordered
# Allows duplicates
# Mutable
# Access using INDEX


# TUPLE
# numbers = (1, 2, 2, 3)
# Ordered
# Allows duplicates
# Immutable
# Access using INDEX


# SET
# numbers = {1, 2, 2, 3}
# Unordered
# Does NOT allow duplicates
# Mutable
# Fast membership checking


# DICTIONARY
# data = {"name": "Rahim", "age": 20}
# Stores KEY : VALUE
# Keys are unique
# Access using KEY


# ==========================================
# ⭐⭐⭐ MOST IMPORTANT DICTIONARY PATTERN
# ==========================================

# Frequency counting is one of the most
# common uses of dictionaries in
# Competitive Programming.

numbers = [5, 5, 2, 3, 5, 2, 3, 3]

freq = {}

for x in numbers:
    freq[x] = freq.get(x, 0) + 1

print(freq)
# Output:
# {5: 3, 2: 2, 3: 3}


# This means:
#
# 5 appears 3 times
# 2 appears 2 times
# 3 appears 3 times
