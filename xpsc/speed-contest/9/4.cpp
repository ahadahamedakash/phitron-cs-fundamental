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

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, m;
        cin >> n >> m;

        string s, k;
        cin >> s >> k;

        int ans = INT_MAX;

        for (int i = 0; i <= n - m; ++i)
        {
            int cost = 0;

            for (int j = 0; j < m; ++j)
            {
                int a = s[i + j] - '0';
                int b = k[j] - '0';

                int forw = (b - a + 10) % 10;
                int back = (a - b + 10) % 10;

                cost += min(forw, back);
            }

            ans = min(ans, cost);
        }

        cout << ans << nl;
    }

    return 0;
}
