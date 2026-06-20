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
        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;
        if (n % 2 == 0)
        {
            cout << 2 << nl;
            cout << 1 << " " << n << nl;
            cout << 1 << " " << n << nl;
        }
        else
        {
            cout << 4 << nl;
            cout << 1 << " " << n - 1 << nl;
            cout << 1 << " " << n - 1 << nl;
            cout << n - 1 << " " << n << nl;
            cout << n - 1 << " " << n << nl;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1869/A
*/
