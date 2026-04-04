#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    ll a, b, c;
    cin >> a >> b >> c;

    // for (ll i = a; i <= b; i++)
    // {
    //     if (i % c == 0)
    //     {
    //         cout << i << nl;
    //         return 0;
    //     }
    // }

    // cout << -1 << nl;

    ll ans = ((a + c - 1) / c) * c; // (a + c − 1) / c computes ceil(a / c) using integer division, giving the smallest multiple of c that is ≥ a when multiplied by c.

    cout << (ans > b ? -1 : ans) << nl;
}
