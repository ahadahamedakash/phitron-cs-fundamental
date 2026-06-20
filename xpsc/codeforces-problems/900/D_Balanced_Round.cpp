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
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        sort(all(v));

        ll cntr = 1, ans = 1;
        for (int i = 1; i < n; ++i)
        {
            if (v[i] - v[i - 1] <= k)
                cntr++;
            else
                cntr = 1;

            ans = max(ans, cntr);
        }

        cout << n - ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1850/D
*/
