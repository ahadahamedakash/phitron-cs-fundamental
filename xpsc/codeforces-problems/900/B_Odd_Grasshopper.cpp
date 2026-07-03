#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll x, n;
        cin >> x >> n;

        ll position;
        if (n % 4 == 0)
            position = 0;
        else if (n % 4 == 1)
            position = -n;
        else if (n % 4 == 2)
            position = 1;
        else if (n % 4 == 3)
            position = n + 1;

        if (x % 2 == 0)
            position = x + position;
        else
            position = x - position;

        cout << position << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1607/B
*/
