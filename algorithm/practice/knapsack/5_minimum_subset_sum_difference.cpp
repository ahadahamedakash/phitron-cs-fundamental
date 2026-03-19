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

    int target = total / 2;

    vector<bool> dp(target + 1, false);
    dp[0] = true;

    for (int i = 0; i < n; i++)
    {
        for (int s = target; s >= arr[i]; s--)
        {
            dp[s] = dp[s] || dp[s - arr[i]];
        }
    }

    int best = 0;
    for (int s = target; s >= 0; s--)
    {
        if (dp[s])
        {
            best = s;
            break;
        }
    }

    int ans = total - 2 * best;

    cout << ans;

    return 0;
}

/*
INPUT:
    4
    1 6 11 5
*/
