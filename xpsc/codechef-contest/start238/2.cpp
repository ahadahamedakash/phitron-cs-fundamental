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
        int x;
        cin >> x;

        int cost;

        if (x <= 20)
            cost = x * 10;
        else
            cost = 20 * 10 + ((x - 20) / 2) * 5;

        cout << cost << nl;
    }

    return 0;
}
