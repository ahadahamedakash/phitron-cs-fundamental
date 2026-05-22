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
        int n, k;
        cin >> n >> k;
        vector<pair<ll, ll>> v;

        for (int i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;

            ll remainder = x % k;
            if (remainder == 0)
                remainder = k;

            v.push_back({-remainder, i + 1});
        }

        sort(all(v));

        for (auto x : v)
            cout << x.second << " ";

        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1849/B
*/
