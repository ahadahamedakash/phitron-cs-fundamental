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
        ll n, m, x;
        cin >> n >> m >> x;

        int r = (x % n);
        if (r == 0)
            r = n;

        int c = (x + n - 1) / n;
        cout << (r - 1) * m + c << nl;
    }

    return 0;
}

/*
0 based index ->
x--;

        long long row = x % n;
        long long col = x / n;

        cout << row * m + col + 1 << '\n';
*/

/*
    LINK: https://codeforces.com/problemset/problem/1506/A
*/
