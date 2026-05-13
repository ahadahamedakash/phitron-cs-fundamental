#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int a, b, t;
    cin >> a >> b >> t;

    // int ans = 0;

    // for (int i = a; i <= t; i += a)
    // {
    //     ans += b;
    // }

    // cout << ans << nl;

    int ans = (t / a) * b;

    cout << ans << nl;

    return 0;
}
