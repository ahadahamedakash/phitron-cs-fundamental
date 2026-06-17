#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int m, n;
        cin >> m >> n;

        int ans = m;
        for (int i = 0; i <= m; ++i)
        {
            int draw = n - 3 * i;
            if (draw < 0)
                continue;

            int loss = m - i - draw;
            if (loss < 0)
                continue;

            ans = min(ans, loss);
        }

        cout << ans << nl;
    }

    return 0;
}
