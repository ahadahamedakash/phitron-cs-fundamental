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

ll countPairs(vector<ll> &vec, ll x)
{
    ll ans = 0;

    int l = 0, r = vec.size() - 1;
    while (l < r)
    {
        if (vec[l] + vec[r] <= x)
        {
            ans += (r - l);
            l++;
        }
        else
            r--;
    }

    return ans;
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll n, l, r;
        cin >> n >> l >> r;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        sort(all(v));

        ll ans = countPairs(v, r) - countPairs(v, l - 1);

        cout << ans << nl;
    }

    return 0;
}
