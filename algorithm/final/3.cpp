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
        ll n;
        cin >> n;

        vector<bool> dp(n + 1, false);
        dp[1] = true;

        for (ll i = 1; i <= n; i++)
        {
            if (!dp[i])
                continue;
            if (i == n)
                break;

            if (i + 3 <= n)
                dp[i + 3] = true;
            if (i * 2 <= n)
                dp[i * 2] = true;
        }

        cout << (dp[n] ? "YES" : "NO") << nl;
    }

    return 0;
}
