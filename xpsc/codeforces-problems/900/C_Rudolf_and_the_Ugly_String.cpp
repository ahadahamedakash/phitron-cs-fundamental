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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int i, ans;
        i = ans = 0;

        while (i < n)
        {
            if (i <= n - 5 && s.substr(i, 5) == "mapie")
            {
                ans++;
                i += 5;
            }
            else if (i <= n - 3 && (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie"))
            {
                ans++;
                i += 3;
            }
            else
                i++;
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1941/C
*/
