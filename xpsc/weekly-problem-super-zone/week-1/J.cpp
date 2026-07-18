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

ll n, k;

ll sum(ll x)
{
    return (x * (x + 1)) / 2;
}

ll helper(ll x)
{
    ll v1 = sum(x) - sum(k - 1);
    ll v2 = sum(k + n - 1) - sum(x);

    return abs(v1 - v2);
}

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        cin >> n >> k;

        ll l = k, r = k + n - 1, ans = llmx;
        while (l <= r)
        {
            ll m1 = l + (r - l) / 3;
            ll m2 = r - (r - l) / 3;
            if (helper(m1) <= helper(m2))
            {
                ans = min(ans, helper(m1));
                r = m2 - 1;
            }
            else
            {
                ans = min(ans, helper(m2));
                l = m1 + 1;
            }
        }

        cout << ans << nl;
    }

    return 0;
}
