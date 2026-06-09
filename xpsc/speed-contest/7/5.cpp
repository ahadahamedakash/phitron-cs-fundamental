#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);

        for (int i = 0; i < n; ++i)
            cin >> grid[i];

        ll ans = 0;

        for (int r = 0; r < n; ++r)
        {
            for (int c = 0; c < m; ++c)
            {
                int mx = min(n - 1 - r, m - 1 - c);

                for (int d = 1; d <= mx; ++d)
                {
                    char ch = grid[r][c];

                    if (grid[r][c + d] == ch && grid[r + d][c] == ch && grid[r + d][c + d] == ch)
                        ans++;
                }
            }
        }

        cout << ans << nl;
    }

    return 0;
}
