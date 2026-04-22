#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int x, y;
    cin >> x >> y;

    if (y > x)
        cout << 100 << nl;
    else
        cout << 0 << nl;

    return 0;
}
