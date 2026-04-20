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
        long long a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        long long x = 2 * b - c;
        if (x > 0 && x % a == 0)
            ok = true;

        long long y = a + c;
        if (y % 2 == 0)
        {
            long long target = y / 2;
            if (target > 0 && target % b == 0)
                ok = true;
        }

        long long z = 2 * b - a;
        if (z > 0 && z % c == 0)
            ok = true;

        cout << (ok ? "YES" : "NO") << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1624/B
*/
