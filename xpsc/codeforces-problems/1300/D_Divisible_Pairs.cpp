#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        map<pair<ll, ll>, ll> mp;

        ll ans = 0;
        for (ll i = 0; i < n; ++i)
        {
            ll rx = v[i] % x;
            ll ry = v[i] % y;

            ll needX = (x - rx) % x;
            ans += mp[{needX, ry}];

            mp[{rx, ry}]++;
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1931/D
*/
