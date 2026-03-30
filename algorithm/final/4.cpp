#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int val[1005], weight[1005];
int dp[1005][1005];

int knapsack(int i, int lim)
{
    if (i < 0 || lim <= 0)
        return 0;

    if (dp[i][lim] != -1)
        return dp[i][lim];

    if (weight[i] <= lim)
    {
        int keep = knapsack(i - 1, lim - weight[i]) + val[i];
        int rem = knapsack(i - 1, lim);

        dp[i][lim] = max(keep, rem);
        return dp[i][lim];
    }
    else
    {
        dp[i][lim] = knapsack(i - 1, lim);
        return dp[i][lim];
    }
}

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n, lim;
        cin >> n >> lim;

        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= lim; j++)
                dp[i][j] = -1;

        for (int i = 0; i < n; i++)
            cin >> weight[i];

        for (int i = 0; i < n; i++)
            cin >> val[i];

        cout << knapsack(n - 1, lim) << nl;
    }

    return 0;
}

/*
INPUT:
    2
    4 7
    2 3 4 5
    4 7 6 5
    4 17
    10 1 6 9
    6 10 10 8
*/
