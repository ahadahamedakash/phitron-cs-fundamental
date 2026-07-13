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

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        vector<vector<int>> c(k + 1);
        for (int i = 0; i < n; ++i)
            c[v[i]].push_back(i + 1);

        int ans = imx;
        for (int i = 1; i <= k; ++i)
        {
            int mx1 = 0, mx2 = 0, prev = 0;

            for (int x : c[i])
            {
                int gap = x - prev - 1;

                if (gap > mx1)
                {
                    mx2 = mx1;
                    mx1 = gap;
                }
                else if (gap > mx2)
                {
                    mx2 = gap;
                }

                prev = x;
            }

            int gap = n - prev;

            if (gap > mx1)
            {
                mx2 = mx1;
                mx1 = gap;
            }
            else if (gap > mx2)
            {
                mx2 = gap;
            }

            ans = min(ans, max(mx2, mx1 / 2));
        }

        cout << ans << nl;
    }

    return 0;
}
/*
    https : // codeforces.com/problemset/problem/1848/B/*
*/
