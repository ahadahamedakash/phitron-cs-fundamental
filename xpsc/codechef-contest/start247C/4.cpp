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

        int zeroCnt, oneCnt;
        zeroCnt = oneCnt = 0;
        for (char c : s)
            if (c == '0')
                zeroCnt++;
            else
                oneCnt++;

        if (zeroCnt < k || oneCnt < k)
            cout << s << nl;
        else if (n == 2 * k)
        {
            string ans = s;
            for (int i = 0; i < n; ++i)
            {
                if (ans[i] == '0')
                    ans[i] = '1';
                else
                    ans[i] = '0';
            }

            cout << min(ans, s) << nl;
        }
        else
        {
            string ans(zeroCnt, '0');
            for (int i = 0; i < oneCnt; ++i)
                ans += '1';

            cout << ans << nl;
        }
    }

    return 0;
}
