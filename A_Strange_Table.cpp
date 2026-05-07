#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int64_t main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        ll n, m, x;
        cin >> n >> m >> x;

        vector<vector<ll>> v(n, vector<ll>(m));

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> v[i][j];
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1506/A
*/
