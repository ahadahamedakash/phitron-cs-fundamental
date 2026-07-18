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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        if (2 * k > n)
        {
            cout << -1 << nl;
            continue;
        }

        int ans = 0;
        for (int i = 0; i < k; ++i)
            if (s[i] == 'L')
                ans++;

        for (int i = n - k; i < n; ++i)
            if (s[i] == 'R')
                ans++;

        cout << ans << nl;
    }

    return 0;
}
