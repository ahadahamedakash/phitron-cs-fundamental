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
        int r, g, b;
        cin >> r >> g >> b;

        int minGem = min(r, min(g, b));

        int total = 0;

        total += minGem * 10;
        int rGem = (r - minGem) * 3;
        int gGem = (g - minGem) * 3;
        int bGem = (b - minGem) * 3;
        total += (rGem + gGem + bGem);

        cout << total << nl;
    }

    return 0;
}
