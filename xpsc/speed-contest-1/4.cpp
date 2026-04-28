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
        int a, b;
        cin >> a >> b;

        if (100 * b > 225 * a)
            cout << "Small" << nl;
        else if (100 * b < 225 * a)
            cout << "Large" << nl;
        else
            cout << "Equal" << nl;
    }

    return 0;
}
