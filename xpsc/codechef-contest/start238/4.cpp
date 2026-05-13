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
        int n;
        ll m;
        cin >> n >> m;

        if (n % 3 != 2)
        {
            cout << -1 << nl;
            continue;
        }

        vector<ll> v;

        ll p[6] = {1, 1, 0, m - 1, m - 1, 0};

        for (ll i = 0; i < n; ++i)
            v.push_back(p[i % 6]);

        for (ll val : v)
            cout << val << " ";

        cout << nl;
    }

    return 0;
}
