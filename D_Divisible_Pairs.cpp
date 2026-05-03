#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
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

        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if ((v[i] + v[j]) % x == 0 && (v[i] - v[j]) % y == 0)
                    cnt++;
            }
        }

        cout << cnt << nl;
    }

    return 0;
}
