#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll &i : v)
        cin >> i;

    ll minOper = INT_MAX;
    for (ll i = 0; i < n; ++i)
        minOper = min(minOper, abs(v[i]));

    cout << minOper << nl;

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1866/A
*/
