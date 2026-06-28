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
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> cnt(7, 0);
        for (char c : s)
            cnt[c - 'A']++;

        int ans = 0;
        for (int i = 0; i < 7; ++i)
            if (cnt[i] < m)
                ans += m - cnt[i];

        cout << ans << nl;
    }

    return 0;
}
