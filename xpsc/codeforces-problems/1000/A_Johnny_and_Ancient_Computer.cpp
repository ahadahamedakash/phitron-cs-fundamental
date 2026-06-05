#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll ra = a, rb = b;
        while (ra % 2 == 0)
            ra /= 2;
        while (rb % 2 == 0)
            rb /= 2;

        if (ra != rb)
            cout << -1 << nl;
        else
        {
            a /= ra;
            b /= rb;

            a = log2(a);
            b = log2(b);
            ll ans = ceil(abs(a - b) / 3.0);

            cout << ans << nl;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1362/A
*/
