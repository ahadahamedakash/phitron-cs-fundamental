n = int(input())
arr = list(map(int, input().split()))

freq = {}

for val in arr:
    if val in freq:
        freq[val] += 1
    else:
        freq[val] = 1

ans = 0
for val in freq:
    cnt = freq[val]

    if cnt > val:
        ans += cnt - val
    elif cnt < val:
        ans += cnt

print(ans)
