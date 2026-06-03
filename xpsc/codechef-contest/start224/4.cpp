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
        ll b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;

        ll z = (b + g + n - 1) / n;

        if (z <= b / x && z <= g / y)
            cout << z << nl;
        else
            cout << -1 << nl;
    }

    return 0;
}
