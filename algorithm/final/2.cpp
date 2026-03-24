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

    ll dp[65];

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;

    for (int i = 4; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];

    cout << dp[n] << nl;

    return 0;
}
