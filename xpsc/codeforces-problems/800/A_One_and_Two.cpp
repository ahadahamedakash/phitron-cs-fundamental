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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        ll ans = -1;
        for (int i = 0; i < n; ++i)
        {
            ll twosTillK = 0, twosAfterK = 0;

            for (int j = 0; j <= i; ++j)
                if (v[j] == 2)
                    twosTillK++;

            for (int j = i + 1; j < n; ++j)
                if (v[j] == 2)
                    twosAfterK++;

            if (twosTillK == twosAfterK)
            {
                ans = i + 1;
                break;
            }
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1788/A
*/
