s = input()

words = s.split()

for i in range(len(words)):
    print(words[i][::-1], end="")

    if i != len(words) - 1:
        print(end=" ")

# https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
