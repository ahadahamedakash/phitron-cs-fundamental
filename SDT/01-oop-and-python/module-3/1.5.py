# ============================================================
# PYTHON BUILT-IN MODULES & CORE DEVELOPER CHEAT SHEET
# ============================================================
#
# This file covers:
#
# 1. math
# 2. random
# 3. time
# 4. datetime
# 5. os
# 6. sys
# 7. collections
# 8. itertools
# 9. functools
# 10. statistics
# 11. string
# 12. re (Regular Expressions)
# 13. json
# 14. pathlib
# 15. heapq
# 16. bisect
# 17. Counter
# 18. defaultdict
# 19. deque
# 20. useful built-in functions
#
# ============================================================


# ============================================================
# 1. MATH MODULE
# ============================================================

import math

# sqrt()
# Square root

print(math.sqrt(25))
# Output: 5.0


# pow()
# Power

print(math.pow(2, 3))
# Output: 8.0


# You can also use **

print(2**3)
# Output: 8


# ceil()
# Rounds UP

print(math.ceil(4.2))
# Output: 5


# floor()
# Rounds DOWN

print(math.floor(4.9))
# Output: 4


# factorial()

print(math.factorial(5))
# Output: 120


# gcd()
# Greatest Common Divisor

print(math.gcd(12, 18))
# Output: 6


# lcm()
# Least Common Multiple

print(math.lcm(4, 6))
# Output: 12


# absolute value

print(abs(-10))
# Output: 10


# pi

print(math.pi)
# Output: 3.141592653589793


# e

print(math.e)
# Output: 2.718281828459045


# log()

print(math.log(10))
# Natural logarithm


# log10()

print(math.log10(100))
# Output: 2.0


# sin(), cos(), tan()
# Angles are in radians.

print(math.sin(math.pi / 2))
# Output: 1.0

print(math.cos(0))
# Output: 1.0


# ============================================================
# 2. RANDOM MODULE
# ============================================================

import random

# random()
# Random floating-point number between 0 and 1

print(random.random())
# Example:
# 0.734523...


# randint(a, b)
# Random integer BETWEEN a and b.
# Both endpoints are included.

print(random.randint(1, 10))
# Example:
# 7


# randrange()
# Similar to range()

print(random.randrange(1, 10))
# Random number from 1 to 9


# choice()
# Selects a random item.

colors = ["red", "blue", "green"]

print(random.choice(colors))
# Example:
# blue


# choices()
# Selects multiple items.
# Repetition is allowed.

print(random.choices(colors, k=3))
# Example:
# ['red', 'green', 'red']


# sample()
# Selects multiple UNIQUE items.

numbers = [1, 2, 3, 4, 5]

print(random.sample(numbers, 2))
# Example:
# [2, 5]


# shuffle()
# Randomly rearranges a list.

numbers = [1, 2, 3, 4, 5]

random.shuffle(numbers)

print(numbers)
# Example:
# [3, 1, 5, 2, 4]


# seed()
# Makes random results reproducible.

random.seed(10)

print(random.randint(1, 100))


# ============================================================
# 3. TIME MODULE
# ============================================================

import time

# time()
# Returns current Unix timestamp.

print(time.time())
# Example:
# 1779723456.123


# sleep()
# Pauses the program.

print("Start")

time.sleep(2)

print("After 2 seconds")


# Measuring execution time ⭐

start = time.time()

total = 0

for i in range(1000000):
    total += i

end = time.time()

print("Time:", end - start)


# perf_counter()
# Better for measuring execution time.

start = time.perf_counter()

for i in range(1000000):
    pass

end = time.perf_counter()

print("Time:", end - start)


# ============================================================
# 4. DATETIME MODULE
# ============================================================

from datetime import datetime, date, timedelta

# Current date and time

now = datetime.now()

print(now)


# Current date

today = date.today()

print(today)


# Access individual parts

print(now.year)
print(now.month)
print(now.day)
print(now.hour)
print(now.minute)
print(now.second)


# Formatting date/time

print(now.strftime("%Y-%m-%d"))
# Example:
# 2026-09-29


print(now.strftime("%d/%m/%Y"))
# Example:
# 29/09/2026


# Custom format

print(now.strftime("%Y-%m-%d %H:%M:%S"))


# Convert string -> datetime

text = "2026-09-29"

dt = datetime.strptime(text, "%Y-%m-%d")

print(dt)


# Add days

future = today + timedelta(days=7)

print(future)


# Difference between dates

date1 = date(2026, 9, 29)
date2 = date(2026, 10, 10)

difference = date2 - date1

print(difference.days)
# Output: 11


# ============================================================
# 5. SYS MODULE
# ============================================================

import sys

# sys.version
# Python version

print(sys.version)


# sys.argv
# Command-line arguments.

# Example command:
#
# python main.py hello 123
#
# sys.argv:
# ['main.py', 'hello', '123']


print(sys.argv)


# sys.exit()
# Stops the program.

# sys.exit()


# Faster input for Competitive Programming ⭐

data = sys.stdin.readline

# Example:
# n = int(data())
# a, b = map(int, data().split())


# Read all input at once

data = sys.stdin.read()

print(data)


# ============================================================
# 6. OS MODULE
# ============================================================

import os

# Current working directory

print(os.getcwd())


# List files/folders

print(os.listdir())


# Check if path exists

print(os.path.exists("test.txt"))


# Check if it is a file

print(os.path.isfile("test.txt"))


# Check if it is a directory

print(os.path.isdir("test"))


# Environment variables

print(os.environ.get("PATH"))


# ============================================================
# 7. PATHLIB MODULE
# ============================================================

from pathlib import Path

# Current directory

path = Path.cwd()

print(path)


# Create a path

file_path = Path("data") / "test.txt"

print(file_path)
# Output:
# data/test.txt


# Check existence

print(file_path.exists())


# Check file

print(file_path.is_file())


# Check directory

print(file_path.is_dir())


# File name

print(file_path.name)


# File extension

print(file_path.suffix)


# Parent directory

print(file_path.parent)


# ============================================================
# 8. COLLECTIONS MODULE
# ============================================================

from collections import Counter, defaultdict, deque

# ============================================================
# COUNTER ⭐⭐⭐
# ============================================================

# Counter is extremely useful for frequency counting.

text = "banana"

freq = Counter(text)

print(freq)
# Output:
# Counter({'a': 3, 'n': 2, 'b': 1})


print(freq["a"])
# Output:
# 3


# Most common

print(freq.most_common(2))
# Output:
# [('a', 3), ('n', 2)]


# Counter with numbers

numbers = [1, 2, 2, 3, 3, 3]

freq = Counter(numbers)

print(freq)
# Output:
# Counter({3: 3, 2: 2, 1: 1})


# ============================================================
# DEFAULTDICT ⭐⭐⭐
# ============================================================

# defaultdict automatically creates a default value.

groups = defaultdict(list)

groups["A"].append("Rahim")
groups["A"].append("Karim")
groups["B"].append("Hasan")

print(groups)

# Output:
# defaultdict(<class 'list'>,
# {'A': ['Rahim', 'Karim'], 'B': ['Hasan']})


# defaultdict(int)
# Perfect for frequency counting.

freq = defaultdict(int)

numbers = [1, 2, 2, 3, 3, 3]

for x in numbers:
    freq[x] += 1

print(freq)
# Output:
# {1: 1, 2: 2, 3: 3}


# ============================================================
# DEQUE ⭐⭐⭐
# ============================================================

# deque = Double Ended Queue

q = deque()


# append()

q.append(10)
q.append(20)

print(q)
# Output:
# deque([10, 20])


# appendleft()

q.appendleft(5)

print(q)
# Output:
# deque([5, 10, 20])


# pop()

q.pop()

print(q)
# Output:
# deque([5, 10])


# popleft()

q.popleft()

print(q)
# Output:
# deque([10])


# Useful as a queue:

q = deque([1, 2, 3])

while q:
    x = q.popleft()
    print(x)

# Output:
# 1
# 2
# 3


# ============================================================
# 9. HEAPQ MODULE
# ============================================================

import heapq

# Python's heapq is a MIN-HEAP.

numbers = [5, 2, 8, 1, 3]

heapq.heapify(numbers)

print(numbers)


# Smallest item

print(numbers[0])


# Push

heapq.heappush(numbers, 0)

print(numbers)


# Pop smallest

x = heapq.heappop(numbers)

print(x)


# Get smallest without removing

print(numbers[0])


# ============================================================
# MAX-HEAP ⭐
# ============================================================

# Python does not have a direct max-heap.
#
# Use NEGATIVE values.

numbers = [5, 2, 8, 1, 3]

max_heap = []

for x in numbers:
    heapq.heappush(max_heap, -x)

print(-max_heap[0])
# Output:
# 8


x = -heapq.heappop(max_heap)

print(x)
# Output:
# 8


# ============================================================
# 10. BISect MODULE
# ============================================================

import bisect

numbers = [1, 3, 5, 7, 9]


# bisect_left()
# Finds the first position where x can be inserted.

print(bisect.bisect_left(numbers, 5))
# Output:
# 2


print(bisect.bisect_left(numbers, 6))
# Output:
# 3


# bisect_right()
# Finds the position AFTER existing equal values.

print(bisect.bisect_right(numbers, 5))
# Output:
# 3


# Insert while keeping list sorted

numbers = [1, 3, 5, 7]

bisect.insort(numbers, 4)

print(numbers)
# Output:
# [1, 3, 4, 5, 7]


# Very useful for Binary Search problems ⭐⭐⭐


# ============================================================
# 11. ITERTOOLS MODULE
# ============================================================

import itertools

# count()
# Infinite counting sequence.

counter = itertools.count(1)

print(next(counter))
# Output: 1

print(next(counter))
# Output: 2

print(next(counter))
# Output: 3


# cycle()
# Repeats items forever.

colors = itertools.cycle(["R", "G", "B"])

print(next(colors))
# R

print(next(colors))
# G

print(next(colors))
# B

print(next(colors))
# R


# combinations()

numbers = [1, 2, 3]

result = itertools.combinations(numbers, 2)

print(list(result))
# Output:
# [(1, 2), (1, 3), (2, 3)]


# permutations()

result = itertools.permutations(numbers, 2)

print(list(result))
# Output:
# [(1, 2), (1, 3), (2, 1), (2, 3), (3, 1), (3, 2)]


# product()

a = [1, 2]
b = ["A", "B"]

result = itertools.product(a, b)

print(list(result))
# Output:
# [(1, 'A'), (1, 'B'), (2, 'A'), (2, 'B')]


# ============================================================
# 12. FUNCTOOLS MODULE
# ============================================================

from functools import reduce, lru_cache

# reduce()
# Applies a function repeatedly.

numbers = [1, 2, 3, 4]

result = reduce(lambda a, b: a + b, numbers)

print(result)
# Output:
# 10


# Another example:

result = reduce(lambda a, b: a * b, numbers)

print(result)
# Output:
# 24


# ============================================================
# LRU CACHE ⭐⭐⭐
# ============================================================

# Useful for Dynamic Programming / Memoization.


@lru_cache(None)
def fibonacci(n):

    if n <= 1:
        return n

    return fibonacci(n - 1) + fibonacci(n - 2)


print(fibonacci(10))
# Output:
# 55


# ============================================================
# 13. STATISTICS MODULE
# ============================================================

import statistics

numbers = [10, 20, 30, 40, 50]


# mean()

print(statistics.mean(numbers))
# Output:
# 30


# median()

print(statistics.median(numbers))
# Output:
# 30


# mode()

numbers = [1, 2, 2, 3, 4]

print(statistics.mode(numbers))
# Output:
# 2


# ============================================================
# 14. STRING MODULE
# ============================================================

import string

# Alphabet

print(string.ascii_lowercase)
# abcdefghijklmnopqrstuvwxyz


print(string.ascii_uppercase)
# ABCDEFGHIJKLMNOPQRSTUVWXYZ


# Digits

print(string.digits)
# 0123456789


# Letters + digits

print(string.ascii_letters)
# abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ


# Punctuation

print(string.punctuation)


# ============================================================
# 15. REGULAR EXPRESSIONS — re
# ============================================================

import re

text = "My phone number is 01712345678"


# search()
# Searches for a pattern.

result = re.search(r"\d+", text)

if result:
    print(result.group())
# Output:
# 01712345678


# findall()
# Finds ALL matches.

numbers = re.findall(r"\d+", text)

print(numbers)
# Output:
# ['01712345678']


# Find all digits

text = "abc123xyz456"

digits = re.findall(r"\d", text)

print(digits)
# Output:
# ['1', '2', '3', '4', '5', '6']


# Find all numbers

numbers = re.findall(r"\d+", text)

print(numbers)
# Output:
# ['123', '456']


# replace using regex

text = "hello    world"

result = re.sub(r"\s+", " ", text)

print(result)
# Output:
# hello world


# ============================================================
# 16. JSON MODULE
# ============================================================

import json

# Python dictionary

data = {"name": "Rahim", "age": 20}


# Python -> JSON string

json_data = json.dumps(data)

print(json_data)
# Output:
# {"name": "Rahim", "age": 20}


# JSON string -> Python dictionary

text = '{"name": "Karim", "age": 22}'

data = json.loads(text)

print(data)
# Output:
# {'name': 'Karim', 'age': 22}


print(data["name"])
# Output:
# Karim


# ============================================================
# 17. USEFUL BUILT-IN FUNCTIONS
# ============================================================


# len()

numbers = [10, 20, 30]

print(len(numbers))
# 3


# sum()

print(sum(numbers))
# 60


# min()

print(min(numbers))
# 10


# max()

print(max(numbers))
# 30


# sorted()

numbers = [5, 2, 8, 1]

print(sorted(numbers))
# [1, 2, 5, 8]


# reversed()

numbers = [1, 2, 3]

print(list(reversed(numbers)))
# [3, 2, 1]


# abs()

print(abs(-20))
# 20


# round()

print(round(3.14159, 2))
# 3.14


# pow()

print(pow(2, 3))
# 8


# ============================================================
# 18. ENUMERATE ⭐⭐⭐
# ============================================================

names = ["Rahim", "Karim", "Hasan"]


# Instead of:

for i in range(len(names)):
    print(i, names[i])


# Use enumerate():

for i, name in enumerate(names):
    print(i, name)

# Output:
# 0 Rahim
# 1 Karim
# 2 Hasan


# Start index from 1:

for i, name in enumerate(names, start=1):
    print(i, name)

# Output:
# 1 Rahim
# 2 Karim
# 3 Hasan


# ============================================================
# 19. ZIP ⭐⭐⭐
# ============================================================

names = ["Rahim", "Karim", "Hasan"]
marks = [80, 90, 85]


# Combine two lists:

for name, mark in zip(names, marks):
    print(name, mark)

# Output:
# Rahim 80
# Karim 90
# Hasan 85


# Create dictionary:

data = dict(zip(names, marks))

print(data)
# Output:
# {'Rahim': 80, 'Karim': 90, 'Hasan': 85}


# ============================================================
# 20. MAP ⭐⭐⭐
# ============================================================

numbers = ["10", "20", "30"]


# Convert strings to integers:

numbers = list(map(int, numbers))

print(numbers)
# Output:
# [10, 20, 30]


# Very common in Competitive Programming:

a, b, c = map(int, input().split())


# ============================================================
# 21. FILTER
# ============================================================

numbers = [1, 2, 3, 4, 5, 6]


# Keep only even numbers:

even = list(filter(lambda x: x % 2 == 0, numbers))

print(even)
# Output:
# [2, 4, 6]


# ============================================================
# 22. ANY / ALL ⭐⭐⭐
# ============================================================

numbers = [2, 4, 6, 8]


# any()
# True if AT LEAST ONE item is True.

print(any(x > 5 for x in numbers))
# Output:
# True


# all()
# True if EVERY item is True.

print(all(x % 2 == 0 for x in numbers))
# Output:
# True


# Example:

numbers = [2, 4, 5, 8]

print(all(x % 2 == 0 for x in numbers))
# Output:
# False


# ============================================================
# 23. MIN / MAX WITH KEY ⭐⭐⭐
# ============================================================

students = [("Rahim", 80), ("Karim", 95), ("Hasan", 70)]


# Student with minimum marks

minimum = min(students, key=lambda x: x[1])

print(minimum)
# Output:
# ('Hasan', 70)


# Student with maximum marks

maximum = max(students, key=lambda x: x[1])

print(maximum)
# Output:
# ('Karim', 95)


# Sort by marks

result = sorted(students, key=lambda x: x[1])

print(result)
# Output:
# [('Hasan', 70), ('Rahim', 80), ('Karim', 95)]


# ============================================================
# 24. LAMBDA FUNCTION
# ============================================================

# Lambda = small anonymous function.

square = lambda x: x * x

print(square(5))
# Output:
# 25


add = lambda a, b: a + b

print(add(10, 20))
# Output:
# 30


# Common use:

numbers = [5, 2, 9, 1]

numbers.sort(key=lambda x: x)

print(numbers)
# Output:
# [1, 2, 5, 9]


# ============================================================
# 25. LIST COMPREHENSION ⭐⭐⭐
# ============================================================

numbers = [1, 2, 3, 4, 5]


# Normal:

squares = []

for x in numbers:
    squares.append(x * x)

print(squares)


# List comprehension:

squares = [x * x for x in numbers]

print(squares)
# Output:
# [1, 4, 9, 16, 25]


# With condition:

even = [x for x in numbers if x % 2 == 0]

print(even)
# Output:
# [2, 4]


# ============================================================
# 26. SET COMPREHENSION
# ============================================================

numbers = [1, 2, 2, 3, 3, 4]

squares = {x * x for x in numbers}

print(squares)
# Output:
# {1, 4, 9, 16}


# ============================================================
# 27. DICTIONARY COMPREHENSION
# ============================================================

numbers = [1, 2, 3, 4]

squares = {x: x * x for x in numbers}

print(squares)
# Output:
# {1: 1, 2: 4, 3: 9, 4: 16}


# ============================================================
# 28. INPUT / OUTPUT — COMPETITIVE PROGRAMMING ⭐⭐⭐
# ============================================================


# Basic input:

name = input()

print(name)


# Multiple values:

a, b = input().split()


# Multiple integers:

a, b = map(int, input().split())


# Multiple integers into a list:

numbers = list(map(int, input().split()))


# Read N:

n = int(input())


# Read N numbers:

numbers = list(map(int, input().split()))


# Faster input:

import sys

input = sys.stdin.readline

n = int(input())


# ============================================================
# 29. PRINTING
# ============================================================


# Normal print

print("Hello")


# Multiple values

a = 10
b = 20

print(a, b)


# end

print("Hello", end=" ")
print("World")

# Output:
# Hello World


# sep

print(10, 20, 30, sep="-")

# Output:
# 10-20-30


# f-string ⭐⭐⭐

name = "Rahim"
age = 20

print(f"My name is {name} and I am {age} years old.")

# Output:
# My name is Rahim and I am 20 years old.


# ============================================================
# 30. FILE HANDLING
# ============================================================


# Write to a file:

with open("test.txt", "w") as file:
    file.write("Hello Python")


# Read from a file:

with open("test.txt", "r") as file:
    content = file.read()

print(content)


# Read line by line:

with open("test.txt", "r") as file:
    for line in file:
        print(line.strip())


# Append:

with open("test.txt", "a") as file:
    file.write("\nNew line")


# ============================================================
# 31. EXCEPTION HANDLING
# ============================================================


# try / except

try:
    x = int("abc")

except ValueError:
    print("Invalid number")


# finally
# Always executes.

try:
    x = 10 / 2

except ZeroDivisionError:
    print("Cannot divide by zero")

finally:
    print("Done")


# ============================================================
# 32. FUNCTIONS ⭐⭐⭐
# ============================================================


# Basic function:


def greet():
    print("Hello")


greet()


# Function with parameter:


def greet(name):
    print("Hello", name)


greet("Rahim")


# Function with return:


def add(a, b):
    return a + b


result = add(10, 20)

print(result)
# Output:
# 30


# Default parameter:


def greet(name="User"):
    print("Hello", name)


greet()
# Output:
# Hello User


greet("Rahim")
# Output:
# Hello Rahim


# ============================================================
# 33. *args
# ============================================================


# Allows variable number of arguments.


def add_all(*numbers):

    return sum(numbers)


print(add_all(1, 2, 3))
# Output:
# 6


print(add_all(1, 2, 3, 4, 5))
# Output:
# 15


# ============================================================
# 34. **kwargs
# ============================================================


# Allows variable number of keyword arguments.


def show_info(**data):

    for key, value in data.items():
        print(key, value)


show_info(name="Rahim", age=20, city="Dhaka")


# ============================================================
# 35. MAIN FUNCTION ⭐⭐⭐
# ============================================================


# Python does NOT require main().
#
# But this pattern is very common in
# professional Python projects.


def main():

    print("Program started")


if __name__ == "__main__":
    main()


# Why?
#
# If this file is executed directly:
#
#     main()
#
# runs.
#
# If this file is imported into another file:
#
#     main()
#
# does NOT automatically run.


# ============================================================
# 36. TYPE CHECKING
# ============================================================


x = 10

print(type(x))
# <class 'int'>


text = "hello"

print(type(text))
# <class 'str'>


numbers = [1, 2, 3]

print(type(numbers))
# <class 'list'>


# isinstance()

print(isinstance(x, int))
# True


print(isinstance(text, str))
# True


# ============================================================
# 37. COMMON TYPE CONVERSIONS ⭐⭐⭐
# ============================================================


# String -> Integer

x = int("123")

print(x)


# Integer -> String

x = str(123)

print(x)


# String -> Float

x = float("3.14")

print(x)


# List -> Set

numbers = [1, 2, 2, 3]

unique = set(numbers)

print(unique)


# Set -> List

numbers = {1, 2, 3}

numbers = list(numbers)

print(numbers)


# List -> Tuple

numbers = [1, 2, 3]

numbers = tuple(numbers)

print(numbers)


# Tuple -> List

numbers = (1, 2, 3)

numbers = list(numbers)

print(numbers)


# ============================================================
# 38. TRUTHY / FALSY VALUES
# ============================================================


# These are generally False:

print(bool(0))
# False

print(bool(""))
# False

print(bool([]))
# False

print(bool({}))
# False

print(bool(None))
# False


# These are True:

print(bool(1))
# True

print(bool("hello"))
# True

print(bool([1, 2]))
# True


# ============================================================
# 39. NONE
# ============================================================


# None means "no value".

x = None

print(x)
# Output:
# None


if x is None:
    print("No value")


# IMPORTANT:
# Prefer:
#
# if x is None:
#
# instead of:
#
# if x == None:


# ============================================================
# 40. IS vs ==
# ============================================================


# == checks VALUE

a = [1, 2]
b = [1, 2]

print(a == b)
# True


# is checks IDENTITY
# Whether they are the same object.

print(a is b)
# False


# ============================================================
# 41. UNPACKING ⭐⭐⭐
# ============================================================


numbers = [10, 20, 30]

a, b, c = numbers

print(a, b, c)
# Output:
# 10 20 30


# * collects remaining values:

numbers = [1, 2, 3, 4, 5]

a, *middle, b = numbers

print(a)
# 1

print(middle)
# [2, 3, 4]

print(b)
# 5


# ============================================================
# 42. SWAPPING
# ============================================================


a = 10
b = 20

a, b = b, a

print(a, b)
# Output:
# 20 10


# ============================================================
# 43. GLOBAL / LOCAL VARIABLE
# ============================================================


x = 10


def test():

    x = 20

    print(x)


test()
# Output:
# 20

print(x)
# Output:
# 10


# ============================================================
# 44. USEFUL STRING SHORTCUTS
# ============================================================


text = "hello"


# Reverse

print(text[::-1])


# Check palindrome

print(text == text[::-1])


# Check digit

print("123".isdigit())


# Check alphabet

print("abc".isalpha())


# Convert to uppercase

print(text.upper())


# Convert to lowercase

print(text.lower())


# Split

print("a b c".split())


# Join

print("-".join(["a", "b", "c"]))


# ============================================================
# 45. COMMON COMPETITIVE PROGRAMMING PATTERNS ⭐⭐⭐
# ============================================================


# Frequency counting:

from collections import Counter

numbers = [1, 2, 2, 3, 3, 3]

freq = Counter(numbers)

print(freq)


# Queue:

from collections import deque

q = deque()

q.append(10)
q.append(20)

print(q.popleft())


# Min heap:

import heapq

heap = []

heapq.heappush(heap, 5)
heapq.heappush(heap, 2)
heapq.heappush(heap, 8)

print(heapq.heappop(heap))
# 2


# Binary search:

import bisect

numbers = [1, 3, 5, 7, 9]

index = bisect.bisect_left(numbers, 5)

print(index)
# 2


# Combinations:

from itertools import combinations

numbers = [1, 2, 3]

for pair in combinations(numbers, 2):
    print(pair)


# ============================================================
# 46. MODULE IMPORT STYLES
# ============================================================


# Import whole module:

import math

print(math.sqrt(25))


# Import specific function:

from math import sqrt

print(sqrt(25))


# Import with alias:

import math as m

print(m.sqrt(25))


# Multiple imports:

from math import sqrt, gcd, factorial

print(sqrt(16))
print(gcd(12, 18))
print(factorial(5))


# ============================================================
# 47. TOP MODULES TO REMEMBER ⭐⭐⭐
# ============================================================

# math
# -> Mathematical operations
#
# random
# -> Random numbers / selections
#
# time
# -> Time / execution measurement
#
# datetime
# -> Dates and times
#
# sys
# -> Python runtime / input / arguments
#
# os
# -> Operating system operations
#
# pathlib
# -> File and folder paths
#
# collections
# -> Counter, defaultdict, deque
#
# itertools
# -> combinations, permutations, product
#
# functools
# -> reduce, caching
#
# heapq
# -> Priority Queue / Heap
#
# bisect
# -> Binary search / sorted insertion
#
# re
# -> Regular expressions
#
# json
# -> JSON data
#
# statistics
# -> Mean / median / mode
#
# string
# -> Useful string constants


# ============================================================
# 48. ⭐⭐⭐ MOST IMPORTANT FOR YOU RIGHT NOW
# ============================================================

# Since you're learning Python for
# Competitive Programming, focus on these first:
#
#
# 1. list
# 2. tuple
# 3. set
# 4. dictionary
# 5. string
#
# 6. range()
# 7. enumerate()
# 8. zip()
# 9. map()
# 10. sorted()
#
# 11. Counter
# 12. defaultdict
# 13. deque
#
# 14. math
# 15. heapq
# 16. bisect
# 17. itertools
#
# 18. lambda
# 19. list comprehension
# 20. functions
#
#
# These will cover a HUGE portion of
# beginner/intermediate Python problems.


# ============================================================
# 49. ⭐ COMPETITIVE PROGRAMMING TEMPLATE
# ============================================================


import sys

input = sys.stdin.readline


def main():

    n = int(input())

    numbers = list(map(int, input().split()))

    print(sum(numbers))


if __name__ == "__main__":
    main()


# ============================================================
# END
# ============================================================
