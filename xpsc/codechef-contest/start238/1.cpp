#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int x, y, z;
    cin >> x >> y >> z;

    int total = x + z;

    int ans = total - y + 1;

    if (ans < 0)
        ans = 0;

    cout << ans << nl;

    return 0;
}
