n = int(input())

arr = list(map(int, input().split()))

ans = 10**9

for i in range(len(arr)):
    cnt = 0

    while arr[i] % 2 == 0:
        arr[i] //= 2
        cnt += 1

    ans = min(ans, cnt)

print(ans)

# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
