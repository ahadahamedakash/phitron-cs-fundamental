#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> v[i][j];

        int negCnt = 0, mn = INT_MAX, sum = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (v[i][j] < 0)
                    negCnt++;

                mn = min(mn, abs(v[i][j]));
                sum += v[i][j];
            }
        }

        if (negCnt % 2 == 0)
            cout << sum << nl;
        else
            cout << sum - 2 * abs(mn) << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1447/B
*/
