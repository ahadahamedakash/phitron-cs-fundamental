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
        int n, x;
        cin >> n >> x;

        int totalSz = n * 3;
        int zero = totalSz - x;

        string ans(totalSz, '-');
        for (int i = 0; i < n; ++i)
        {
            if (zero > 0)
            {
                ans[i] = '0';
                zero--;
            }
            else
            {
                ans[i] = '1';
                x--;
            }

            if (zero > 0)
            {
                ans[i + n] = '0';
                zero--;
            }
            else
            {
                ans[i + n] = '1';
                x--;
            }

            if (x > 0)
            {
                ans[i + 2 * n] = '1';
                x--;
            }
            else
            {
                ans[i + 2 * n] = '0';
                zero--;
            }
        }

        cout << ans << nl;
    }

    return 0;
}
