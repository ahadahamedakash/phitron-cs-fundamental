#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
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
        string a, b;
        cin >> a >> b;

        ll n = sz(a), m = sz(b);
        ll lcs = 0;

        for (ll len = 1; len <= min(n, m); ++len)
        {
            for (ll i = 0; i <= n; ++i)
            {
                for (ll j = 0; j + len <= m; ++j)
                {
                    string exA = a.substr(i, len);
                    string exB = b.substr(j, len);

                    if (exA == exB)
                        lcs = max(lcs, len);
                }
            }
        }

        ll op = n + m - 2 * lcs;

        cout << op << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1506/C
*/
