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

    int n, q;
    cin >> n;

    vector<ll> v(n);
    for (ll &i : v)
        cin >> i;

    sort(all(v));

    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;

        ll ans = upper_bound(v.begin(), v.end(), x) - v.begin();
        cout << ans << nl;
    }

    return 0;
}
