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

        ll currAns = 0, currMax = -1;
        for (int i = 0; i < n; ++i)
            if (v[i] >= currMax)
                currMax = v[i];
            else
                currAns += currMax - v[i];

        ll ans = currAns;
        currMax = 1;

        for (int i = 0; i < n; ++i)
        {
            ll dAns = currAns;

            if (currMax >= v[i])
                dAns -= currMax - v[i];
            else
            {
                ll dMax = currMax;
                for (int j = i + 1; j < n; j++)
                {
                    if (v[j] >= v[i])
                        break;

                    dMax = max(dMax, v[j]);

                    dAns -= v[i] - v[j];
                    dAns += dMax - v[j];
                }
            }
            ans = min(ans, dAns);
            currMax = max(currMax, v[i]);
        }

        cout << ans << nl;
    }

    return 0;
}
