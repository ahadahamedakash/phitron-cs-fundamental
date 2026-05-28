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
    t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        vector<int> ans;
        ans.push_back(v[0]);

        for (int i = 1; i < n; ++i)
        {
            if (v[i] >= v[i - 1])
                ans.push_back(v[i]);
            else
            {
                ans.push_back(v[i]);
                ans.push_back(v[i]);
            }
        }
        cout << ans.size() << nl;

        for (int val : ans)
            cout << val << " ";

        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1862/B
*/
