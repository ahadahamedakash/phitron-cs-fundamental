numbers = [3, 5, 8, 15, 20, 25]

for number in numbers:
    if (
        result := number * 2
    ) > 20:  # Assigns number * 2 to result, then checks if result > 20
        print(f"Found: {result}")


while (
    name := input("Enter your name: ")
) == "":  # Takes input, assigns it to name, then checks if it's empty
    print("Name cannot be empty!")

print(f"Welcome, {name}!")
