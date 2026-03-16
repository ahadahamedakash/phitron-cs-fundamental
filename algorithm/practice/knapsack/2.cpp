#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n;
    cin >> n;

    vector<int> wt(n);
    for (int i = 0; i < n; i++)
        cin >> wt[i];

    int w;
    cin >> w;

    vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int cap = 1; cap <= w; cap++)
        {
            dp[i][cap] = dp[i - 1][cap];

            if (wt[i - 1] <= cap)
            {
                dp[i][cap] = max(dp[i][cap], wt[i - 1] + dp[i - 1][cap - wt[i - 1]]);
            }
        }
    }

    cout << dp[n][w];

    return 0;
}
