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

bool isPossible(ll m, vector<ll> &v, ll x)
{
    ll sz = v.size();

    ll totalWater = 0;

    for (ll h : v)
    {
        if (h < m)
        {
            totalWater += m - h;

            if (totalWater > x)
                return false;
        }
    }

    return totalWater <= x;
}

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        ll first = 1, last = *max_element(all(v)) + x, ans = -1;

        while (first <= last)
        {
            ll mid = first + (last - first) / 2;
            if (isPossible(mid, v, x))
            {
                ans = mid;
                first = mid + 1;
            }
            else
            {
                last = mid - 1;
            }
        }

        cout << ans << nl;
    }

    return 0;
}
