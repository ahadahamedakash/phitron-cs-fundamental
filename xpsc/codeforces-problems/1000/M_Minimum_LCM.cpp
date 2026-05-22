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

    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll a = 1;
        ll b = n - 1;

        for (ll fac = 2; fac * fac <= n; ++fac)
        {
            if (n % fac == 0)
            {
                a = n / fac;
                b = n - a;
                break;
            }
        }

        cout << a << " " << b << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1765/M
*/
