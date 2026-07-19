#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
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
        ll x;
        cin >> x;

        if ((x & (x - 1)) == 0 || (x & (x + 1)) == 0) // check if power or two || all bits are 1
        {
            cout << -1 << nl;
            continue;
        }

        ll lowestSetBit = x & (-x);
        int msb = 63 - __builtin_clzll(x);

        ll lowestUnsetBit = 0;
        for (int i = 0; i < msb; ++i)
        {
            if ((x & (1LL << i)) == 0)
            {
                lowestUnsetBit = (1LL << i);
                break;
            }
        }

        ll y = lowestUnsetBit | lowestSetBit;

        cout << y << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/2074/C
*/
