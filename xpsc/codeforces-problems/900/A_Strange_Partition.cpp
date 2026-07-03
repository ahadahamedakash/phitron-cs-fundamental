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
        ll n, x;
        cin >> n >> x;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        ll mn = 0, mx = 0;

        for (int i = 0; i < n; ++i)
        {
            mx += ceil(v[i] * 1.0 / x);
            mn += v[i];
        }

        mn = ceil(mn * 1.0 / x);
        cout << mn << spc << mx << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1471/A
*/
