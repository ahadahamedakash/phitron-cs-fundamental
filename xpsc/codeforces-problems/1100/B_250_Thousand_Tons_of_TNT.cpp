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
        int n;
        cin >> n;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        vector<ll> prefSum(n);
        prefSum[0] = v[0];
        for (ll i = 1; i < n; ++i)
            prefSum[i] = v[i] + prefSum[i - 1];

        ll ans = 0;
        for (ll k = 1; k < n; ++k)
        {
            if (n % k)
                continue;

            ll st = k - 1;
            ll res = 0;
            ll maxI = prefSum[st];
            ll minI = prefSum[st];
            for (ll idx = st + k; idx < n; idx += k)
            {
                ll curr = prefSum[idx] - prefSum[idx - k];
                maxI = max(maxI, curr);
                minI = min(minI, curr);
            }

            ans = max(ans, maxI - minI);
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    https://codeforces.com/contest/1899/problem/B
*/
