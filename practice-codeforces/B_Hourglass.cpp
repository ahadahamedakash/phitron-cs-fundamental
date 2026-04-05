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
        ll s, k, m;
        cin >> s >> k >> m;

        ll lastFlip = (m / k) * k;
        ll elapsed = m - lastFlip;
        ll rem = s - elapsed;

        if (rem < 0)
            rem = 0;

        cout << rem << nl;
    }

    return 0;
}
