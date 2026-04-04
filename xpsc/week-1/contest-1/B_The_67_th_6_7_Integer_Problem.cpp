#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(7);
        ll total = 0;

        ll mx = LLONG_MIN;
        for (int i = 0; i < 7; i++)
        {
            cin >> v[i];
            mx = max(mx, (ll)v[i]);
            total += v[i];
        }

        ll res = ((total - mx) * -1) + mx;

        cout << res << nl;
    }

    return 0;
}
