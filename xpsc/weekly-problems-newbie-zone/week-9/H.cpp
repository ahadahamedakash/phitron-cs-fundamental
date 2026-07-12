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

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll n, q;
        cin >> n >> q;

        vector<ll> steps(n);
        for (ll &i : steps)
            cin >> i;

        vector<ll> prefSum(n), mx(n);
        for (int i = 0; i < n; ++i)
        {
            prefSum[i] = steps[i];
            if (i)
                prefSum[i] += prefSum[i - 1];

            mx[i] = steps[i];
            if (i)
                mx[i] = max(mx[i], mx[i - 1]);
        }

        vector<ll> qu(q);
        for (ll &i : qu)
            cin >> i;

        for (ll val : qu)
        {
            ll idx = upper_bound(mx.begin(), mx.end(), val) - mx.begin();

            if (idx == 0)
                cout << 0 << spc;
            else
                cout << prefSum[idx - 1] << spc;
        }

        cout << nl;
    }

    return 0;
}
