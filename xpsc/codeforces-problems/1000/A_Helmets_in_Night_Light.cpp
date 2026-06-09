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

        ll n, p;
        cin >> n >> p;
        vector<pair<ll, ll>> v(n);

        vector<ll> a(n), b(n);
        for (ll &i : a)
            cin >> i;
        for (ll &j : b)
            cin >> j;

        for (int i = 0; i < n; ++i)
            v[i] = {b[i], a[i]};

        sort(all(v));

        ll minCost = p;
        ll alreadyShared = 1;
        for (auto [sharingCost, canBeShared] : v)
        {
            if (sharingCost >= p)
                break;

            if (alreadyShared + canBeShared > n)
            {
                minCost += (n - alreadyShared) * sharingCost;
                alreadyShared = n;
                break;
            }
            else
            {
                minCost += canBeShared * sharingCost;
                alreadyShared += canBeShared;
            }
        }

        minCost += (n - alreadyShared) * p;

        cout << minCost << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1876/A
*/
