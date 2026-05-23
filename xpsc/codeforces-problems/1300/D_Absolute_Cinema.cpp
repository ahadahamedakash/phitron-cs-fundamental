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
        int n;
        cin >> n;
        vector<ll> f(n);
        for (ll &i : f)
            cin >> i;

        vector<ll> ans(n);

        for (int i = 1; i < n - 1; ++i)
            ans[i] = (f[i + 1] + f[i - 1] - 2 * f[i]) / 2;

        ll sum = 0;
        for (int i = 1; i < n - 1; ++i)
            sum += ans[i] * i;

        ans[n - 1] = (f[0] - sum) / (n - 1);

        sum = 0;

        for (int i = 1; i < n; ++i)
            sum += ans[i] * (n - 1 - i);

        ans[0] = (f[n - 1] - sum) / (n - 1);

        for (auto val : ans)
            cout << val << " ";

        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/2195/D
*/
