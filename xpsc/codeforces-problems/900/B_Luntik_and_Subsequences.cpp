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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        ll cntOfOne = 0, cntOfZero = 0;
        for (ll val : v)
        {
            if (val == 1)
                cntOfOne++;
            else if (val == 0)
                cntOfZero++;
        }

        ll ans = pow(2, cntOfZero) * cntOfOne;

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1582/B
*/
