#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int dp[1005];

int fibo(int n)
{
    if (n == 0 || n == 1) // n < 2
        return n;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = fibo(n - 1) + (n + 2);
    return dp[n];
}

int main()
{
    fastIO();

    memset(dp, -1, sizeof(dp));

    cout << fibo(100);

    return 0;
}
