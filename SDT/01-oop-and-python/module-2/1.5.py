# ============================================================
# LIST SLICING
# ============================================================

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]

# Index:
#          0  1  2  3  4  5  6  7  8  9
#         [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
#
# Negative index:
#         -10 -9 -8 -7 -6 -5 -4 -3 -2 -1
#         [ 1,  2,  3,  4,  5,  6,  7,  8,  9,  0]
#
# Basic slicing syntax:
#
# list[start : stop : step]
#
# start → where slicing starts
# stop  → where slicing stops (NOT included)
# step  → how many positions to move


# ------------------------------------------------------------
# 1. Basic slicing
# ------------------------------------------------------------

print(numbers[2:6])
# Output: [3, 4, 5, 6]
# Starts at index 2 and stops BEFORE index 6.


# ------------------------------------------------------------
# 2. Slicing with step = 1
# ------------------------------------------------------------

print(numbers[1:5:1])
# Output: [2, 3, 4, 5]
# Start at index 1, stop before index 5, move by 1.


# ------------------------------------------------------------
# 3. Slicing with step = 2
# ------------------------------------------------------------

print(numbers[1:4:2])
# Output: [2, 4]
# Start at index 1 → 2
# Move 2 positions → 4
# Stop before index 4.


# ------------------------------------------------------------
# 4. Negative step
# ------------------------------------------------------------

print(numbers[1:5:-1])
# Output: []
# Why?
# Start = index 1
# Stop = index 5
# Step = -1 means move LEFT.
#
# But index 1 is already LEFT of index 5,
# so we cannot move from 1 toward 5 using -1.


# ------------------------------------------------------------
# 5. Reverse slicing
# ------------------------------------------------------------

print(numbers[7:2:-1])
# Output: [8, 7, 6, 5, 4]
# Start at index 7 → 8
# Move backwards by 1
# Stop BEFORE index 2.


# ------------------------------------------------------------
# 6. Reverse slicing with step = -2
# ------------------------------------------------------------

print(numbers[7:2:-2])
# Output: [8, 6, 4]
# Start at index 7 → 8
# Move backwards by 2 positions.
# Stop before index 2.


# ------------------------------------------------------------
# 7. Start from an index and go to the end
# ------------------------------------------------------------

print(numbers[4:])
# Output: [5, 6, 7, 8, 9, 0]
# Start at index 4 and continue until the end.


# ============================================================
# MORE IMPORTANT LIST SLICING EXAMPLES
# ============================================================


# ------------------------------------------------------------
# 8. From the beginning to an index
# ------------------------------------------------------------

print(numbers[:5])
# Output: [1, 2, 3, 4, 5]
# Start is omitted → starts from index 0.
# Stops BEFORE index 5.


# ------------------------------------------------------------
# 9. Copy the whole list
# ------------------------------------------------------------

print(numbers[:])
# Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
# Both start and stop are omitted.


# ------------------------------------------------------------
# 10. Every second element
# ------------------------------------------------------------

print(numbers[::2])
# Output: [1, 3, 5, 7, 9]
# Start from beginning.
# Go to the end.
# Take every 2nd element.


# ------------------------------------------------------------
# 11. Every third element
# ------------------------------------------------------------

print(numbers[::3])
# Output: [1, 4, 7, 0]
# Take every 3rd element.


# ------------------------------------------------------------
# 12. Reverse the entire list
# ------------------------------------------------------------

print(numbers[::-1])
# Output: [0, 9, 8, 7, 6, 5, 4, 3, 2, 1]
# -1 means move from right to left.


# ------------------------------------------------------------
# 13. Reverse every second element
# ------------------------------------------------------------

print(numbers[::-2])
# Output: [0, 8, 6, 4, 2]
# Start from the end and move backwards by 2.


# ------------------------------------------------------------
# 14. Negative start index
# ------------------------------------------------------------

print(numbers[-5:])
# Output: [6, 7, 8, 9, 0]
# Start at index -5 and go to the end.


# ------------------------------------------------------------
# 15. Negative stop index
# ------------------------------------------------------------

print(numbers[:-3])
# Output: [1, 2, 3, 4, 5, 6, 7]
# Go from the beginning and stop BEFORE index -3.


# ------------------------------------------------------------
# 16. Negative start and stop
# ------------------------------------------------------------

print(numbers[-7:-2])
# Output: [4, 5, 6, 7, 8]
# Start at -7 and stop BEFORE -2.


# ------------------------------------------------------------
# 17. Reverse using negative indexes
# ------------------------------------------------------------

print(numbers[-2:-7:-1])
# Output: [9, 8, 7, 6, 5]
# Start at -2 → 9
# Move backwards.
# Stop BEFORE -7.


# ============================================================
# IMPORTANT RULES TO REMEMBER
# ============================================================

# list[start:stop:step]

# 1. STOP is always excluded.
#
# 2. Positive step → move LEFT to RIGHT.
#    Example:
print(numbers[2:6])
# Output: [3, 4, 5, 6]


# 3. Negative step → move RIGHT to LEFT.
#    Example:
print(numbers[6:2:-1])
# Output: [7, 6, 5, 4]


# 4. Missing start:
print(numbers[:4])
# Output: [1, 2, 3, 4]


# 5. Missing stop:
print(numbers[4:])
# Output: [5, 6, 7, 8, 9, 0]


# 6. Missing start AND stop:
print(numbers[:])
# Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]


# 7. Missing step means step = 1.
print(numbers[2:6])
# Output: [3, 4, 5, 6]


# 8. step cannot be 0.
# numbers[1:5:0]  # ValueError


# ============================================================
# LIST OPERATIONS YOU SHOULD ALSO KNOW
# ============================================================

# Access one element
print(numbers[3])
# Output: 4


# Access using negative index
print(numbers[-1])
# Output: 0


# Change an element
numbers[0] = 100
print(numbers)
# Output: [100, 2, 3, 4, 5, 6, 7, 8, 9, 0]


# Add an element at the end
numbers.append(11)
print(numbers)
# Output: [100, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11]


# Insert an element at a specific index
numbers.insert(1, 200)
print(numbers)
# Output: [100, 200, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11]


# Remove a specific value
numbers.remove(200)
print(numbers)
# Output: [100, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11]


# Remove the last element
numbers.pop()
print(numbers)
# Output: [100, 2, 3, 4, 5, 6, 7, 8, 9, 0]


# Length of the list
print(len(numbers))
# Output: 10


# Check if a value exists
print(5 in numbers)
# Output: True


# Check if a value does NOT exist
print(50 not in numbers)
# Output: True
