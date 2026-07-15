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
        int n, p;
        cin >> n >> p;

        string s;
        cin >> s;

        int c1, c2;
        c1 = c2 = 0;

        for (int i = p - 1; i >= 0; --i)
            if (s[i] == 'R')
                c1++;

        for (int i = p - 1; i < n; ++i)
            if (s[i] == 'L')
                c2++;

        cout << min(c1, c2) << nl;
    }

    return 0;
}
