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

        ll n, m;
        cin >> n >> m;
        if (m < n || m > n * 3)
        {
            cout << "NO" << nl;
            continue;
        }

        ll rem = m - n;

        if (rem % 2 == 0)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
