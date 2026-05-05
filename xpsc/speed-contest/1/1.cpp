#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int x;
    cin >> x;

    int ans = 1000 * (pow(2, 4 - x));

    cout << ans << nl;

    return 0;
}
