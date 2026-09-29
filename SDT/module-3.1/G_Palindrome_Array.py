n = int(input())
a = list(map(int, input().split()))

left = 0
right = n - 1

while left < right:
    if a[left] != a[right]:
        print("NO")
        break

    left += 1
    right -= 1
else:
    print("YES")


# flag = True
# while left < right:
#     if a[left] != a[right]:
#         flag = False
#         break
#     left += 1
#     right -= 1

# if flag:
#     print("YES")
# else:
#     print("NO")

# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
