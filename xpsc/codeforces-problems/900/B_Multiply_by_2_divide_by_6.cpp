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
        int n;
        cin >> n;

        ll twoCnt = 0, threeCnt = 0;

        while (n % 3 == 0)
        {
            threeCnt++;
            n /= 3;
        }

        while (n % 2 == 0)
        {
            twoCnt++;
            n /= 2;
        }

        if (n > 1 || twoCnt > threeCnt)
            cout << -1 << nl;
        else
            cout << threeCnt + (threeCnt - twoCnt) << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1374/B
*/
