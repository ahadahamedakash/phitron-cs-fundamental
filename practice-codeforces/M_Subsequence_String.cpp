#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    string s;
    cin >> s;
    string h = "hello";
    int j = 0;

    for (int i = 0; i < s.size() && j < h.size(); i++)
    {
        if (s[i] == h[j])
            j++;
    }

    if (j == h.size())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

/*
    LINK: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M
*/