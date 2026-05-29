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
        ll n;
        cin >> n;

        if (n % 2 != 0 || n < 4)
        {
            cout << -1 << nl;
        }
        else
        {
            ll minBuses = ceil(n * 1.0 / 6);
            ll maxBuses = n / 4;
            cout << minBuses << ' ' << maxBuses << nl;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1679/A
*/
