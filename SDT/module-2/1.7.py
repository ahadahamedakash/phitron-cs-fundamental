# ==========================================================
# COMPREHENSION
# ==========================================================


# ==========================================================
# 1. LIST COMPREHENSION
# ==========================================================

# Normal way:
numbers = [1, 2, 3, 4, 5]

squares = []

for number in numbers:
    squares.append(number**2)

print(squares)
# Output: [1, 4, 9, 16, 25]


# List comprehension:
# [expression for item in iterable]

squares = [number**2 for number in numbers]

print(squares)
# Output: [1, 4, 9, 16, 25]


# ==========================================================
# 2. LIST COMPREHENSION WITH IF
# ==========================================================

# Get only even numbers.
# The "if" is used to FILTER the items.

numbers = [1, 2, 3, 4, 5, 6]

even_numbers = [number for number in numbers if number % 2 == 0]

print(even_numbers)
# Output: [2, 4, 6]


# Get only odd numbers.

odd_numbers = [number for number in numbers if number % 2 != 0]

print(odd_numbers)
# Output: [1, 3, 5]


# ==========================================================
# 3. LIST COMPREHENSION WITH IF-ELSE
# ==========================================================

# "if-else" is used to choose what value should be added.

numbers = [1, 2, 3, 4, 5]

result = ["Even" if number % 2 == 0 else "Odd" for number in numbers]

print(result)
# Output: ['Odd', 'Even', 'Odd', 'Even', 'Odd']


# ==========================================================
# 4. USING RANGE()
# ==========================================================

# Create a list from 1 to 5.

numbers = [number for number in range(1, 6)]

print(numbers)
# Output: [1, 2, 3, 4, 5]


# Create squares from 1 to 5.

squares = [number**2 for number in range(1, 6)]

print(squares)
# Output: [1, 4, 9, 16, 25]


# ==========================================================
# 5. STRING COMPREHENSION
# ==========================================================

# A string is iterable, so we can loop through its characters.

word = "python"

letters = [letter for letter in word]

print(letters)
# Output: ['p', 'y', 't', 'h', 'o', 'n']


# Get only vowels.

vowels = [letter for letter in word if letter in "aeiou"]

print(vowels)
# Output: ['o']


# Convert every character to uppercase.

uppercase = [letter.upper() for letter in word]

print(uppercase)
# Output: ['P', 'Y', 'T', 'H', 'O', 'N']


# ==========================================================
# 6. NESTED LIST COMPREHENSION
# ==========================================================

# A list containing multiple lists.

numbers = [[1, 2], [3, 4], [5, 6]]

# Flatten the nested list into one list.

result = [number for row in numbers for number in row]

print(result)
# Output: [1, 2, 3, 4, 5, 6]


# The above is equivalent to:

result = []

for row in numbers:
    for number in row:
        result.append(number)

print(result)
# Output: [1, 2, 3, 4, 5, 6]


# ==========================================================
# 7. DICTIONARY COMPREHENSION
# ==========================================================

# Syntax:
# {key: value for item in iterable}

numbers = [1, 2, 3, 4, 5]

squares = {number: number**2 for number in numbers}

print(squares)
# Output:
# {1: 1, 2: 4, 3: 9, 4: 16, 5: 25}


# Dictionary comprehension with condition.

even_squares = {number: number**2 for number in numbers if number % 2 == 0}

print(even_squares)
# Output:
# {2: 4, 4: 16}


# ==========================================================
# 8. SET COMPREHENSION
# ==========================================================

# Syntax:
# {expression for item in iterable}

numbers = [1, 2, 2, 3, 3, 4]

unique_numbers = {number for number in numbers}

print(unique_numbers)
# Output:
# {1, 2, 3, 4}

# A set automatically removes duplicate values.


# ==========================================================
# 9. SET COMPREHENSION WITH CONDITION
# ==========================================================

numbers = [1, 2, 3, 4, 5, 6]

even_numbers = {number for number in numbers if number % 2 == 0}

print(even_numbers)
# Output:
# {2, 4, 6}


# ==========================================================
# 10. COMPREHENSION CHEAT SHEET
# ==========================================================

# List comprehension:
# [expression for item in iterable]

# List comprehension with condition:
# [expression for item in iterable if condition]

# List comprehension with if-else:
# [value_if_true if condition else value_if_false
#  for item in iterable]

# Dictionary comprehension:
# {key: value for item in iterable}

# Set comprehension:
# {expression for item in iterable}


# ==========================================================
# EASY WAY TO UNDERSTAND
# ==========================================================

# This:

squares = [number**2 for number in numbers]

# Means:
#
# "For every number in numbers,
#  calculate number ** 2
#  and put the result into a new list."


# This:

even = [number for number in numbers if number % 2 == 0]

# Means:
#
# "For every number in numbers,
#  put it into the new list
#  ONLY IF the number is even."
