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

        sort(all(steps));

        ll sum = 0;
        vector<ll> prefSum;
        for (ll val : steps)
        {
            sum += val;
            prefSum.push_back(sum);
        }

        vector<ll> qu(q);
        for (ll &i : qu)
            cin >> i;

        for (ll val : qu)
        {
            ll idx = upper_bound(steps.begin(), steps.end(), val) - steps.begin();

            if (idx == 0)
                cout << 0 << spc;
            else
                cout << prefSum[idx - 1] << spc;
        }

        cout << nl;
    }

    return 0;
}
