n, q = map(int, input().split())

a = [0] + list(map(int, input().split()))

prefix = [0] * (n + 1)

for i in range(1, n + 1):
    prefix[i] = prefix[i - 1] + a[i]

for _ in range(q):
    l, r = map(int, input().split())
    print(prefix[r] - prefix[l - 1])

# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
