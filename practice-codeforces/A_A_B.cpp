#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int a = s[0] - '0';
        int b = s[2] - '0';
        cout << a + b << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1772/A
*/
