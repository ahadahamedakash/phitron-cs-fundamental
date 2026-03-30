#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

ll dp[35];

ll tetranachi(ll n)
{
    if (n < 2)
        return n;
    if (n == 2)
        return 1;
    if (n == 3)
        return 2;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = tetranachi(n - 1) + tetranachi(n - 2) + tetranachi(n - 3) + tetranachi(n - 4);
    return dp[n];
}

int main()
{
    fastIO();

    memset(dp, -1, sizeof(dp));

    int n;
    /*
        0 <= n <=30
    */
    cin >> n;

    cout << tetranachi(n) << nl;

    return 0;
}
