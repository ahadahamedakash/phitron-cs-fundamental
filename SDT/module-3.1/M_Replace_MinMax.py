n = int(input())

a = list(map(int, input().split()))

mn = a.index(min(a))
mx = a.index(max(a))

a[mn], a[mx] = a[mx], a[mn]

print(*a)

# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
