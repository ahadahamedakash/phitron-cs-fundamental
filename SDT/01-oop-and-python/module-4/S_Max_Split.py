str = input()

cnt = 0
st = 0
ans = []

for i in range(len(str)):
    if str[i] == "L":
        cnt += 1
    else:
        cnt -= 1

    if cnt == 0:
        ans.append(str[st : i + 1])
        st = i + 1

print(len(ans))
for x in ans:
    print(x)

# https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S?fbclid=IwAR1qi6o8WBDOrdzcZ--U5YO_40SSQmmLbZ8jggB6CFIRqog1ukVL_Z2wK2s
