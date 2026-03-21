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

    int target;
    cin >> target;

    vector<int> dp(target + 1, 0);

    dp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int s = target; s >= arr[i]; s--)
        {
            dp[s] += dp[s - arr[i]];
        }
    }

    cout << dp[target];

    return 0;
}

/*
INPUT:
    4
    1 2 3 3
    6
*/
