#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int n, k, s, t;
        cin >> n >> k >> s >> t;
        vector<ll> x(n + 1), y(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> x[i] >> y[i];
        }

        ll ans = abs(x[s] - x[t]) + abs(y[s] - y[t]);
        ll mins = 1e17, mint = 1e17;
        for (int i = 1; i <= k; ++i)
        {
            mins = min(mins, abs(x[s] - x[i]) + abs(y[s] - y[i]));
            mint = min(mint, abs(x[t] - x[i]) + abs(y[t] - y[i]));
        }

        ans = min(ans, mins + mint);
        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1869/B
*/
