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

vector<int> allPrimes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        map<int, vector<int>> mp;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 11; ++j)
            {
                if (v[i] % allPrimes[j] == 0)
                {
                    mp[allPrimes[j]].push_back(i);
                    break;
                }
            }
        }

        vector<int> ans(n);
        int color = 1;
        for (auto [x, y] : mp)
        {
            for (auto pos : y)
                ans[pos] = color;

            color++;
        }

        cout << sz(mp) << nl;
        for (int i = 0; i < n; ++i)
            cout << ans[i] << spc;

        cout << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1332/B
*/
