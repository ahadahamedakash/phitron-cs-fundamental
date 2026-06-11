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
        int n;
        cin >> n;
        vector<int> v(n - 1);
        for (int &i : v)
            cin >> i;

        vector<int> ans;
        ans.push_back(v[0]);
        for (int i = 0; i < n - 1; ++i)
        {
            ans.back() = ans.back() | v[i];
            ans.push_back(v[i]);
        }

        bool flag = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            if (v[i] != (ans[i] & ans[i + 1]))
            {
                if (v[i] != (ans[i] & ans[i + 1]))
                {
                    flag = 1;
                }
            }
        }

        if (flag == 1)
            cout << -1;
        else
        {
            for (int val : ans)
                cout << val << " ";
        }
        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1991/B
*/
