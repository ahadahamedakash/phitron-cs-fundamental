# loops
num = 1

while num <= 10:
    # print(num)
    num += 1

numbers = [11, 12, 13, 14, 15]

total = 0
for num in numbers:
    # print(num)
    total += num

print(total)

name = "hello world"

for ch in name:
    print(ch)

for i in range(1, 10):
    print(i)

numbers = [1, 3, 5, 7, 9]
for idx, num in enumerate(numbers):
    print(idx, num)
