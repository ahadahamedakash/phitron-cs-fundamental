# ==========================================
# STRING METHODS
# ==========================================


text = "Hello World"


# 1. lower()
# Converts all characters to lowercase.
print(text.lower())
# Output: hello world


# 2. upper()
# Converts all characters to uppercase.
print(text.upper())
# Output: HELLO WORLD


# 3. capitalize()
# Makes the first character uppercase
# and the remaining characters lowercase.
text = "hello world"
print(text.capitalize())
# Output: Hello world


# 4. title()
# Makes the first character of every word uppercase.
text = "hello world"
print(text.title())
# Output: Hello World


# 5. swapcase()
# Converts uppercase to lowercase
# and lowercase to uppercase.
text = "Hello World"
print(text.swapcase())
# Output: hELLO wORLD


# ==========================================
# FINDING / SEARCHING
# ==========================================

text = "hello world"


# 6. find()
# Returns the index of the FIRST occurrence.
# Returns -1 if not found.
print(text.find("l"))
# Output: 2

print(text.find("x"))
# Output: -1


# 7. index()
# Returns the index of the FIRST occurrence.
# Raises an error if the value is not found.
print(text.index("l"))
# Output: 2


# 8. count()
# Counts how many times a value appears.
print(text.count("l"))
# Output: 3


# 9. startswith()
# Checks if the string starts with a specific value.
print(text.startswith("hello"))
# Output: True

print(text.startswith("world"))
# Output: False


# 10. endswith()
# Checks if the string ends with a specific value.
print(text.endswith("world"))
# Output: True

print(text.endswith("hello"))
# Output: False


# ==========================================
# CHECKING STRING CONTENT
# ==========================================


# 11. isdigit()
# Returns True if ALL characters are digits.
print("12345".isdigit())
# Output: True

print("123a".isdigit())
# Output: False


# 12. isalpha()
# Returns True if ALL characters are alphabetic.
print("hello".isalpha())
# Output: True

print("hello123".isalpha())
# Output: False


# 13. isalnum()
# Returns True if ALL characters are letters or digits.
print("abc123".isalnum())
# Output: True

print("abc 123".isalnum())
# Output: False


# 14. isspace()
# Returns True if ALL characters are whitespace.
print("   ".isspace())
# Output: True

print("hello".isspace())
# Output: False


# ==========================================
# REMOVING SPACES
# ==========================================


text = "   hello world   "


# 15. strip()
# Removes spaces from BOTH sides.
print(text.strip())
# Output: hello world


# 16. lstrip()
# Removes spaces from the LEFT side.
print(text.lstrip())
# Output: hello world


# 17. rstrip()
# Removes spaces from the RIGHT side.
print(text.rstrip())
# Output:    hello world


# ==========================================
# REPLACING
# ==========================================


text = "hello world"


# 18. replace()
# Replaces one value with another.
print(text.replace("world", "python"))
# Output: hello python


# Replace all occurrences.
text = "banana"
print(text.replace("a", "x"))
# Output: bxnxnx


# ==========================================
# SPLITTING / JOINING
# ==========================================


# 19. split()
# Splits a string into a LIST.
text = "hello world python"

words = text.split()

print(words)
# Output: ['hello', 'world', 'python']


# Split using a specific separator.
text = "apple,banana,mango"

fruits = text.split(",")

print(fruits)
# Output: ['apple', 'banana', 'mango']


# Very common in Competitive Programming:
# Input: 10 20 30

a, b, c = map(int, input("Enter 3 numbers: ").split())

print(a, b, c)


# 20. join()
# Combines a LIST of strings into one string.
words = ["hello", "world"]

print(" ".join(words))
# Output: hello world

print("-".join(words))
# Output: hello-world


# ==========================================
# INDEXING & SLICING
# ==========================================


text = "hello"


# 21. Indexing
# Access a character using its index.
print(text[0])
# Output: h

print(text[2])
# Output: l


# Negative indexing.
print(text[-1])
# Output: o

print(text[-2])
# Output: l


# 22. Slicing
# string[start:end]
# END index is NOT included.

print(text[1:4])
# Output: ell

print(text[:3])
# Output: hel

print(text[2:])
# Output: llo

print(text[:])
# Output: hello


# ==========================================
# REVERSING
# ==========================================


# 23. Reverse a string ⭐
# [::-1] reverses the string.

text = "hello"

print(text[::-1])
# Output: olleh


# ==========================================
# LENGTH
# ==========================================


# 24. len()
# Returns the number of characters.

text = "hello"

print(len(text))
# Output: 5


# ==========================================
# STRING -> INTEGER / INTEGER -> STRING
# ==========================================


# 25. int()
# Converts a string into an integer.

text = "123"

number = int(text)

print(number)
# Output: 123


# 26. str()
# Converts an integer into a string.

number = 123

text = str(number)

print(text)
# Output: 123


# ==========================================
# MEMBERSHIP
# ==========================================


# 27. "in"
# Checks whether a character/string exists.

text = "hello"

print("e" in text)
# Output: True

print("x" in text)
# Output: False


# "not in"
print("x" not in text)
# Output: True


# Very useful example:
# Check if a character is 4 or 7.

ch = "4"

if ch in "47":
    print("Lucky digit")
# Output: Lucky digit


# ==========================================
# LOOPING THROUGH A STRING
# ==========================================


text = "hello"


# 28. Loop through characters

for ch in text:
    print(ch)

# Output:
# h
# e
# l
# l
# o


# 29. Loop through indexes

for i in range(len(text)):
    print(text[i])

# Output:
# h
# e
# l
# l
# o


# IMPORTANT:
# for ch in text:
# -> ch is the CHARACTER


# for i in range(len(text)):
# -> i is the INDEX


# ==========================================
# STRING COMPARISON
# ==========================================


a = "hello"
b = "hello"


# 30. Equal
print(a == b)
# Output: True


# 31. Not equal
print(a != b)
# Output: False


# ==========================================
# PALINDROME ⭐⭐⭐
# ==========================================


# A palindrome reads the same forward and backward.

text = "12121"

if text == text[::-1]:
    print("YES")
else:
    print("NO")

# Output:
# YES


text = "12345"

if text == text[::-1]:
    print("YES")
else:
    print("NO")

# Output:
# NO


# ==========================================
# REVERSE NUMBER WITHOUT LEADING ZEROES
# ==========================================


n = "160"

rev = n[::-1]

print(int(rev))
# Output: 61


# Example:
# n = "160"
# rev = "061"
# int(rev) = 61


# ==========================================
# PALINDROME + REVERSE NUMBER PROBLEM
# ==========================================


n = "12121"

rev = n[::-1]

print(int(rev))

if n == rev:
    print("YES")
else:
    print("NO")

# Output:
# 12121
# YES


# ==========================================
# MOST IMPORTANT STRING THINGS ⭐
# ==========================================


# Input
s = "hello"


# Length
print(len(s))


# Character
print(s[0])


# Last character
print(s[-1])


# Slice
print(s[1:4])


# Reverse
print(s[::-1])


# Lowercase
print(s.lower())


# Uppercase
print(s.upper())


# Split
print(s.split())


# Remove spaces
print(s.strip())


# Replace
print(s.replace("h", "H"))


# Find
print(s.find("e"))


# Count
print(s.count("l"))


# Check existence
print("e" in s)


# String -> int
x = int("123")


# Int -> string
s = str(123)


# Character loop
for ch in s:
    print(ch)


# Index loop
for i in range(len(s)):
    print(s[i])


# Palindrome
print(s == s[::-1])
