#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int helper(int n)
{
    int cnt = 0;

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            cnt++;

        while (n % i == 0)
            n /= i;
    }

    if (n > 1)
        cnt++;

    return cnt;
}

int main()
{
    fastIO();

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 2; i <= n; ++i)
        if (helper(i) == 2)
            ans++;

    cout << ans << nl;

    return 0;
}

/*
    https://codeforces.com/problemset/problem/26/A
*/
