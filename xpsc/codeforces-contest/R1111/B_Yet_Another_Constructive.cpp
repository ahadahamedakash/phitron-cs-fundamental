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
        int n, k, m;
        cin >> n >> k >> m;

        if (k > m)
        {
            no;
            continue;
        }

        yes;
        vector<ll> suff(n + 2);
        for (ll i = 1; i <= n + 1; ++i)
            suff[i] = (n + 1 - i) % k;

        vector<ll> ans;
        for (ll i = 1; i <= n; ++i)
        {
            ll x = suff[i] - suff[i + 1];

            x %= m;
            if (x <= 0)
                x += m;

            ans.push_back(x);
        }

        for (ll val : ans)
            cout << val << spc;

        cout << nl;
    }

    return 0;
}
