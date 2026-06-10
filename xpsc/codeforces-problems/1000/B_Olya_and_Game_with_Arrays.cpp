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
        ll n;
        cin >> n;
        vector<ll> secondElements;
        ll lowestFirstMinimum = LLONG_MAX;
        while (n--)
        {
            ll m;
            cin >> m;
            vector<ll> v(m);
            for (ll &i : v)
                cin >> i;

            sort(all(v));
            secondElements.push_back(v[1]);
            lowestFirstMinimum = min(lowestFirstMinimum, v[0]);
        }

        sort(all(secondElements));

        ll sumOfSecondElements = 0;
        for (ll val : secondElements)
            sumOfSecondElements += val;

        ll ans = lowestFirstMinimum + sumOfSecondElements - secondElements[0];
        cout << ans << nl;
    }

    return 0;
}

/*
    link: https://codeforces.com/problemset/problem/1859/B
*/
