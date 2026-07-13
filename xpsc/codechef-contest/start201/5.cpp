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
        ll n, m;
        cin >> n >> m;

        if (n == 0)
        {
            string ans = ">=>";
            string f = "";
            m -= 2;
            for (ll i = 0; i < m; ++i)
            {
                f.push_back('>');
                f.push_back('<');
            }

            cout << f + ans << nl;
        }
        else if (m == 0)
        {
            n -= 2;
            string ans = "<=<";
            string f = "";
            for (ll i = 0; i < n; ++i)
            {
                f.push_back('<');
                f.push_back('<');
            }
            cout << f + ans << nl;
        }
        else
        {
            n -= 1;
            m -= 1;
            string ans = "<<>";
            string f = "";
            string b = "";
            for (ll i = 0; i < m; ++i)
            {
                b.push_back('<');
                b.push_back('>');
            }

            for (ll i = 0; i < n; ++i)
            {
                f.push_back('<');
                f.push_back('<');
            }

            cout << f + ans + b << nl;
        }
    }

    return 0;
}
