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
        ll a, b, x, y;
        cin >> a >> b >> x >> y;

        ll k = a / x;
        cout << (a - k * x) + (b + k * y) << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/BANKGLITCH
*/
