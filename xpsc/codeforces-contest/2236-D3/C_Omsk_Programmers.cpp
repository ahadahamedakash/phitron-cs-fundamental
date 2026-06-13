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
    cin >> t;

    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;

        ll cnt = 0, ans = abs(a - b);

        while (a != 0 || b != 0)
        {
            if (a < b)
                swap(a, b);

            a = a / x;
            cnt++;

            ll currDiff = abs(a - b);
            ans = min(ans, currDiff + cnt);
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/contest/2236/problem/C
*/
