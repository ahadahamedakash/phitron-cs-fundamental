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

        vector<ll> v(n);
        for (int i = 0; i < n; ++i)
        {
            char c;
            cin >> c;
            if (c == '1')
                v[i] = 1;
            else if (c == '0')
                v[i] = 0;
        }

        ll ans = 0;
        for (int i = 0; i < n; ++i)
        {
            ans += v[i];
            if (i + 1 < n)
                ans += v[i] + v[i + 1];
        }

        cout << ans << nl;
    }

    return 0;
}
