#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool helper(int x)
{
    if (x == 0)
        return false;

    while (x > 0)
    {
        int digit = x % 10;
        if (digit != 4 && digit != 7)
            return false;
        x /= 10;
    }

    return true;
}

int main()
{
    fastIO();

    string s;
    cin >> s;
    int count = 0;
    for (char c : s)
    {
        if (c == '7' || c == '4')
            count++;
    }

    cout << (helper(count) ? "YES" : "NO") << nl;

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/110/A
*/
