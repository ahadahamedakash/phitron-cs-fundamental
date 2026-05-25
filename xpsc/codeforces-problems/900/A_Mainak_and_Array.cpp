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
    t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        ll ans = v[n - 1] - v[0];

        for (int i = 1; i < n; ++i)
            ans = max(ans, v[i] - v[0]);
        for (int i = 0; i < n - 1; ++i)
            ans = max(ans, v[n - 1] - v[i]);
        for (int i = 0; i < n - 1; ++i)
            ans = max(ans, v[i] - v[i + 1]);

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1726/A
*/
