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
        int n;
        cin >> n;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        sort(rall(v));

        if (n == 2)
        {
            cout << v[0] << spc << v[1] << nl;
            continue;
        }

        bool isPossible = true;
        for (int i = 0; i < n - 2; ++i)
        {
            if (v[i] % v[i + 1] != v[i + 2])
            {
                isPossible = false;
                break;
            }
        }

        if (!isPossible)
            cout << -1 << nl;
        else
            cout << v[0] << spc << v[1] << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/2234/A
*/
