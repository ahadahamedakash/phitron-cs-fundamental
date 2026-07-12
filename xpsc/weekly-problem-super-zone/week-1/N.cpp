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

const ll INF = 40000000000LL;

using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll h, n;
        cin >> h >> n;

        vector<ll> d(n), c(n);
        for (ll &i : d)
            cin >> i;
        for (ll &j : c)
            cin >> j;

        ll l = 1, r = INF, ans = llmx;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            ll sum = 0;

            for (ll i = 0; i < n; ++i)
            {
                ll cnt = (mid - 1) / c[i] + 1;
                sum += (cnt * d[i]);

                if (sum >= h)
                    break;
            }

            if (sum >= h)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans << nl;
    }

    return 0;
}
