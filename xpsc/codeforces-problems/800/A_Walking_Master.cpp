#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int sx, sy, dx, dy;
        cin >> sx >> sy >> dx >> dy;

        if (dy < sy)
        {
            cout << -1 << nl;
            continue;
        }

        int moves = dy - sy;

        sx += moves;

        if (sx < dx)
        {
            cout << -1 << nl;
            continue;
        }

        moves += (sx - dx);
        cout << moves << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1806/A
*/
