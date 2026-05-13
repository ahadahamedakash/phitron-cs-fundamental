#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
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
        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        if (v[0] == 1)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1896/A
*/
