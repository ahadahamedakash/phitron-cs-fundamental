#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n, p = 3;
        cin >> n;
        map<string, vector<int>> mp;

        for (int i = 1; i <= p; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        vector<int> ans(p + 1);

        for (auto [x, y] : mp)
        {
            vector<int> v = y;
            if (v.size() == 1)
            {
                ans[v[0]] += 3;
            }
            if (v.size() == 2)
            {
                ans[v[0]]++;
                ans[v[1]]++;
            }
        }

        for (int i = 1; i <= p; i++)
        {
            cout << ans[i] << " ";
        }

        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1722/C
*/
