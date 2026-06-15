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
        ll n, x, k;
        cin >> n >> x >> k;

        ll val = x + 100 * k;

        vector<ll> v(n, 0);
        for (ll &i : v)
            cin >> i;

        ll cnt = 0;
        for (ll i = 0; i < n; ++i)
            if (v[i] > val)
                cnt++;

        cout << max(1LL, cnt - k + 1) << nl;
    }

    return 0;
}
