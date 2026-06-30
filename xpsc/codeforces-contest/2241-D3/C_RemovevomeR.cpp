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
        string s;
        cin >> s;

        int cnt = 1;
        for (int i = 1; i < n; ++i)
            if (s[i] != s[i - 1])
                cnt++;

        int ans;
        if (cnt == 2)
            ans = 2;
        else
            ans = 1;

        cout << ans << nl;
    }

    return 0;
}
