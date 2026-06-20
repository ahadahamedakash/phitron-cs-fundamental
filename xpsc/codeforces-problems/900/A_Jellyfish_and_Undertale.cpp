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
        ll a, b, n;
        cin >> a >> b >> n;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        ll mxTime = b;
        for (ll val : v)
            mxTime += min(val, a - 1);

        cout << mxTime << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1875/A
*/
