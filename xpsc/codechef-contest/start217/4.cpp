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

ll gcd(ll a, ll b)
{
    while (b)
    {
        ll temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

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

        ll commonDiff = 0;
        for (int i = 1; i < n; ++i)
            commonDiff = gcd(commonDiff, v[i] - v[i - 1]);

        ll ans = 0;
        for (int i = 1; i < n; ++i)
        {
            ll gap = v[i] - v[i - 1];
            ans += gap / commonDiff - 1;
        }

        cout << ans << nl;
    }

    return 0;
}
