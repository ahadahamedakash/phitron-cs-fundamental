# ============================================================
# PYTHON BUILT-IN FUNCTIONS — CHEAT SHEET
# ============================================================


# ============================================================
# 1. TYPE CONVERSION
# ============================================================

int()  # Convert a value to an integer
# Example:
int("25")
# Result: 25


float()  # Convert a value to a floating-point number
# Example:
float("3.14")
# Result: 3.14


str()  # Convert a value to a string
# Example:
str(100)
# Result: "100"


bool()  # Convert a value to True or False
# Example:
bool(1)
# Result: True


complex()  # Create a complex number
# Example:
complex(2, 3)
# Result: (2+3j)


list()  # Create/convert to a list
# Example:
list("abc")
# Result: ['a', 'b', 'c']


tuple()  # Create/convert to a tuple
# Example:
tuple([1, 2, 3])
# Result: (1, 2, 3)


set()  # Create/convert to a set
# Example:
set([1, 2, 2, 3])
# Result: {1, 2, 3}


dict()  # Create a dictionary
# Example:
dict(name="John", age=25)
# Result: {'name': 'John', 'age': 25}


# ============================================================
# 2. MATHEMATICAL / NUMBER FUNCTIONS
# ============================================================

abs()  # Returns the absolute value
# Example:
abs(-10)
# Result: 10


round()  # Round a number
# Example:
round(3.14159, 2)
# Result: 3.14


pow()  # Raise a number to a power
# Example:
pow(2, 3)
# Result: 8


divmod()  # Returns quotient and remainder
# Example:
divmod(10, 3)
# Result: (3, 1)


min()  # Returns the smallest value
# Example:
min(10, 5, 20)
# Result: 5


max()  # Returns the largest value
# Example:
max(10, 5, 20)
# Result: 20


sum()  # Adds values together
# Example:
sum([1, 2, 3, 4])
# Result: 10


# ============================================================
# 3. WORKING WITH STRINGS / CHARACTERS
# ============================================================

chr()  # Convert a Unicode number to a character
# Example:
chr(65)
# Result: 'A'


ord()  # Convert a character to its Unicode number
# Example:
ord("A")
# Result: 65


ascii()  # Return an ASCII representation of an object
# Example:
ascii("café")
# Result: "'caf\\xe9'"


format()  # Format a value as a string
# Example:
format(3.14159, ".2f")
# Result: '3.14'


repr()  # Return a developer-friendly representation
# Example:
repr("Hello")
# Result: "'Hello'"


# ============================================================
# 4. WORKING WITH LISTS / ITERABLES
# ============================================================

len()  # Returns the number of items
# Example:
len([10, 20, 30])
# Result: 3


range()  # Generates a sequence of numbers
# Example:
list(range(5))
# Result: [0, 1, 2, 3, 4]


enumerate()  # Gives index and value while looping
# Example:
list(enumerate(["a", "b", "c"]))
# Result: [(0, 'a'), (1, 'b'), (2, 'c')]


zip()  # Combines elements from multiple iterables
# Example:
list(zip([1, 2, 3], ["a", "b", "c"]))
# Result: [(1, 'a'), (2, 'b'), (3, 'c')]


sorted()  # Returns a sorted list
# Example:
sorted([3, 1, 2])
# Result: [1, 2, 3]


reversed()  # Returns an iterator in reverse order
# Example:
list(reversed([1, 2, 3]))
# Result: [3, 2, 1]


all()  # True if ALL elements are truthy
# Example:
all([True, True, True])
# Result: True


any()  # True if AT LEAST ONE element is truthy
# Example:
any([False, True, False])
# Result: True


filter()  # Keeps elements that pass a condition
# Example:
list(filter(lambda x: x > 5, [2, 6, 8, 3]))
# Result: [6, 8]


map()  # Applies a function to every item
# Example:
list(map(lambda x: x * 2, [1, 2, 3]))
# Result: [2, 4, 6]


iter()  # Creates an iterator
# Example:
x = iter([10, 20, 30])
next(x)
# Result: 10


next()  # Gets the next item from an iterator
# Example:
x = iter([10, 20, 30])
next(x)
# Result: 10


# ============================================================
# 5. INPUT / OUTPUT
# ============================================================

print()  # Displays output on the screen
# Example:
print("Hello")
# Result: Hello


input()  # Gets input from the user
# Example:
name = input("Enter your name: ")
# User enters: John
# Result stored in name: "John"


open()  # Opens a file
# Example:
file = open("data.txt", "r")
# Opens data.txt for reading


# ============================================================
# 6. OBJECT / TYPE INFORMATION
# ============================================================

type()  # Returns the type of an object
# Example:
type(10)
# Result: <class 'int'>


isinstance()  # Checks whether an object is an instance of a type
# Example:
isinstance(10, int)
# Result: True


issubclass()  # Checks whether a class inherits from another class
# Example:
issubclass(bool, int)
# Result: True


id()  # Returns the identity of an object
# Example:
x = 10
id(x)
# Result: An integer representing the object's identity


callable()  # Checks whether an object can be called
# Example:
callable(print)
# Result: True


dir()  # Shows available attributes/methods
# Example:
dir("hello")
# Result: List of string methods and attributes


# ============================================================
# 7. OBJECT ATTRIBUTES
# ============================================================

hasattr()  # Checks whether an object has an attribute
# Example:
hasattr("hello", "upper")
# Result: True


getattr()  # Gets an attribute from an object
# Example:
getattr("hello", "upper")
# Result: <built-in method upper ...>


setattr()  # Sets an attribute on an object


# Example:
class Person:
    pass


p = Person()
setattr(p, "name", "John")
print(p.name)
# Result: John


delattr()  # Deletes an attribute from an object
# Example:
delattr(p, "name")
# Removes the name attribute


vars()  # Returns an object's __dict__


# Example:
class Person:
    def __init__(self):
        self.name = "John"


p = Person()
vars(p)
# Result: {'name': 'John'}


# ============================================================
# 8. BINARY / NUMBER REPRESENTATION
# ============================================================

bin()  # Converts an integer to binary
# Example:
bin(10)
# Result: '0b1010'


hex()  # Converts an integer to hexadecimal
# Example:
hex(255)
# Result: '0xff'


oct()  # Converts an integer to octal
# Example:
oct(8)
# Result: '0o10'


bytes()  # Creates immutable bytes
# Example:
bytes([65, 66, 67])
# Result: b'ABC'


bytearray()  # Creates mutable bytes
# Example:
bytearray([65, 66, 67])
# Result: bytearray(b'ABC')


memoryview()  # Creates a view of an object's memory
# Example:
memoryview(b"hello")
# Result: <memory at ...>


# ============================================================
# 9. DEBUGGING / HELP
# ============================================================

help()  # Displays Python documentation
# Example:
help(len)
# Shows documentation for len()


breakpoint()  # Starts Python's debugger
# Example:
x = 10
breakpoint()
# Pauses execution and opens the debugger


# ============================================================
# 10. CLASSES / OBJECT-ORIENTED PROGRAMMING
# ============================================================

object()  # Creates a basic Python object
# Example:
x = object()
type(x)
# Result: <class 'object'>


classmethod()  # Creates a method that receives the class


# Example:
class Person:
    @classmethod
    def hello(cls):
        print("Hello")


Person.hello()
# Result: Hello


staticmethod()  # Creates a method without self/cls


# Example:
class Math:
    @staticmethod
    def add(a, b):
        return a + b


Math.add(2, 3)
# Result: 5


property()  # Creates a managed attribute


# Example:
class Person:
    def __init__(self, name):
        self._name = name

    @property
    def name(self):
        return self._name


p = Person("John")
print(p.name)
# Result: John


super()  # Accesses a parent class


# Example:
class Animal:
    def speak(self):
        print("Animal sound")


class Dog(Animal):
    def speak(self):
        super().speak()
        print("Woof")


Dog().speak()
# Result:
# Animal sound
# Woof


# ============================================================
# 11. EXECUTING / COMPILING PYTHON CODE
# ============================================================

compile()  # Compiles Python source code
# Example:
code = compile("x = 10", "", "exec")
exec(code)
print(x)
# Result: 10


eval()  # Evaluates a Python expression
# Example:
eval("10 + 5")
# Result: 15


exec()  # Executes Python code
# Example:
exec("x = 10")
print(x)
# Result: 10


# ============================================================
# 12. NAMESPACE FUNCTIONS
# ============================================================

globals()  # Returns the global namespace
# Example:
x = 10
globals()["x"]
# Result: 10


locals()  # Returns the local namespace


# Example:
def test():
    x = 10
    print(locals())


test()
# Result: {'x': 10}


# ============================================================
# 13. OTHER / ASYNCHRONOUS FUNCTIONS
# ============================================================

aiter()  # Returns an asynchronous iterator
# Example:
# async_iter = aiter(async_iterable)


anext()  # Gets the next item from an async iterator
# Example:
# value = await anext(async_iterator)
