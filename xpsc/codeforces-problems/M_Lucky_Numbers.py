a, b = map(int, input().split())

found = False

for i in range(a, b + 1):
    isLucky = True
    for digit in str(i):
        if digit != "4" and digit != "7":
            isLucky = False
            break

    if isLucky:
        print(i, end=" ")
        found = True

if not found:
    print(-1)

# https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
