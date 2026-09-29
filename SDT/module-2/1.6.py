# ==========================================
# LIST METHODS
# ==========================================

numbers = [1, 3, 4, 5, 4, 9]


# 1. append()
# Adds ONE item to the end of the list.
numbers.append(5)

print(numbers)
# Output: [1, 3, 4, 5, 4, 9, 5]


# 2. insert()
# Adds an item at a specific position.
# insert(index, value)
numbers.insert(2, 0)

print(numbers)
# Output: [1, 3, 0, 4, 5, 4, 9, 5]


# 3. remove()
# Removes the FIRST occurrence of a specific value.
numbers.remove(4)

print(numbers)
# Output: [1, 3, 0, 5, 4, 9, 5]


# 4. pop()
# Removes and returns an item.
# Without an index, it removes the LAST item.
numbers.pop()

print(numbers)
# Output: [1, 3, 0, 5, 4, 9]


# 5. pop(index)
# Removes an item at a specific index.
numbers.pop(2)

print(numbers)
# Output: [1, 3, 5, 4, 9]


# 6. clear()
# Removes ALL items from the list.
numbers.clear()

print(numbers)
# Output: []


# ==========================================
# METHODS FOR FINDING / COUNTING
# ==========================================

numbers = [1, 3, 4, 5, 4, 9]


# 7. index()
# Returns the index of the FIRST occurrence of a value.
print(numbers.index(4))
# Output: 2


# 8. count()
# Counts how many times a value appears.
print(numbers.count(4))
# Output: 2


# ==========================================
# METHODS FOR SORTING
# ==========================================

numbers = [5, 2, 9, 1, 4]


# 9. sort()
# Sorts the list in ascending order.
numbers.sort()

print(numbers)
# Output: [1, 2, 4, 5, 9]


# sort(reverse=True)
# Sorts the list in descending order.
numbers.sort(reverse=True)

print(numbers)
# Output: [9, 5, 4, 2, 1]


# 10. reverse()
# Reverses the current order of the list.
numbers.reverse()

print(numbers)
# Output: [1, 2, 4, 5, 9]


# ==========================================
# METHODS FOR COPYING / EXTENDING
# ==========================================

numbers = [1, 2, 3]


# 11. copy()
# Creates a copy of the list.
new_numbers = numbers.copy()

print(new_numbers)
# Output: [1, 2, 3]


# 12. extend()
# Adds multiple items to the end of a list.
numbers.extend([4, 5, 6])

print(numbers)
# Output: [1, 2, 3, 4, 5, 6]


# ==========================================
# USEFUL LIST OPERATIONS
# ==========================================

numbers = [1, 3, 4, 5, 4, 9]


# len()
# Returns the number of items in the list.
print(len(numbers))
# Output: 6


# min()
# Returns the smallest value.
print(min(numbers))
# Output: 1


# max()
# Returns the largest value.
print(max(numbers))
# Output: 9


# sum()
# Adds all numbers in the list.
print(sum(numbers))
# Output: 26


# ==========================================
# INDEXING & SLICING
# ==========================================

numbers = [1, 3, 4, 5, 4, 9]


# Access an item using its index.
print(numbers[0])
# Output: 1


# Negative index starts from the end.
print(numbers[-1])
# Output: 9


# Slicing
# numbers[start:end]
print(numbers[1:4])
# Output: [3, 4, 5]


# Copy the entire list using slicing.
print(numbers[:])
# Output: [1, 3, 4, 5, 4, 9]
