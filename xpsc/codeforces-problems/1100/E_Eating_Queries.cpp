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
        ll n, q;
        cin >> n >> q;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        sort(rall(v));
        vector<ll> prefSum(n);
        prefSum[0] = v[0];
        for (int i = 1; i < n; ++i)
            prefSum[i] = v[i] + prefSum[i - 1];

        while (q--)
        {
            ll x;
            cin >> x;

            auto it = lower_bound(prefSum.begin(), prefSum.end(), x);

            if (it == prefSum.end())
                cout << -1 << nl;
            else
                cout << (it - prefSum.begin() + 1) << nl;
        }
    }

    return 0;
}

/*
    link: https://codeforces.com/problemset/problem/1676/E
*/
