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
        int n, m, a, b, c;
        cin >> n >> m >> a >> b >> c;

        int total = 0;

        if (n > m)
        {
            int rest = n - m;
            total = m * c;
            total += rest * a;
        }
        else if (m > n)
        {
            int rest = m - n;
            total = n * c;
            total += rest * b;
        }
        else
        {
            total = n * c;
        }

        cout << total << nl;
    }

    return 0;
}

/*
INPUT:
3
2 1 10 10 15
5 10 15 12 26
10 10 100 100 200
*/
