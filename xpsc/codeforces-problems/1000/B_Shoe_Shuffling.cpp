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

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        map<int, int> mp;
        for (int val : v)
            mp[val]++;

        bool isPoss = true;
        for (auto i : mp)
        {
            if (i.second == 1)
            {
                isPoss = false;
                break;
            }
        }

        if (!isPoss)
        {
            cout << -1 << nl;
            continue;
        }

        vector<int> ans(n);
        for (int i = 0; i < n; ++i)
            ans[i] = i + 1;

        int l, r;
        l = r = 0;
        while (r < n)
        {
            if (v[l] == v[r])
                r++;
            else
            {
                rotate(ans.begin() + l, ans.begin() + l + 1, ans.begin() + r);
                l = r;
            }
        }

        rotate(ans.begin() + l, ans.begin() + l + 1, ans.begin() + r);

        for (int val : ans)
            cout << val << spc;

        cout << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1691/B
*/
