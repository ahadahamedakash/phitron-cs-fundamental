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
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> v(n + 1);
        for (int i = 1; i <= n; ++i)
            cin >> v[i];

        int lftCnt = 0, rtCnt = 0;
        for (int i = 1; i < l; ++i)
            lftCnt += v[i];
        for (int i = r + 1; i <= n; ++i)
            rtCnt += v[i];

        cout << max(lftCnt, rtCnt) << nl;
    }

    return 0;
}
