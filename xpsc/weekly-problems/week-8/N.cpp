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
        ll l, r;
        cin >> l >> r;

        if (2 * l <= r)
            cout << l << ' ' << 2 * l << nl;
        else
            cout << -1 << ' ' << -1 << nl;
    }

    return 0;
}
