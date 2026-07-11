#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
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
        int n, x;
        cin >> n >> x;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        vector<pair<ll, ll>> seg(n);
        for (int i = 0; i < n; ++i)
            seg[i] = {v[i] - x, v[i] + x};

        ll ans = 0;
        ll l = seg[0].first, r = seg[0].second;
        for (int i = 1; i < n; ++i)
        {
            l = max(l, seg[i].first);
            r = min(r, seg[i].second);
            if (l > r)
            {
                ans++;
                l = seg[i].first;
                r = seg[i].second;
            }
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1704/B
*/
