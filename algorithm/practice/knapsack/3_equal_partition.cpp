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
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    if (total % 2 != 0)
    {
        cout << "NO" << nl;
        return 0;
    }

    int target = total / 2;

    vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));

    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= target; s++)
        {
            dp[i][s] = dp[i - 1][s];

            if (arr[i - 1] <= s)
            {
                dp[i][s] = dp[i][s] || dp[i - 1][s - arr[i - 1]];
            }
        }
    }

    if (dp[n][target])
        cout << "YES" << nl;
    else
        cout << "NO" << nl;

    return 0;
}

/*
INPUT:
    4
    1 5 11 8
*/
