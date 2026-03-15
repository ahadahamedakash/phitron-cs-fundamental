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
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum;
    cin >> sum;

    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    // cout << nl << sum;

    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    dp[0][0] = true;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s <= sum; s++)
        {
            dp[i][s] = dp[i - 1][s];

            if (arr[i - 1] <= s)
            {
                dp[i][s] = dp[i][s] || dp[i - 1][s - arr[i - 1]];
            }
        }
    }
    if (dp[n][sum])
        cout << "YES" << nl;
    else
        cout << "NO" << nl;

    return 0;
}
