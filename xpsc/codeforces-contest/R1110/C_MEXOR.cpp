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
        int target = n ^ k;

        vector<int> ans;
        int bt = 1;
        map<int, int> mp;
        while (bt <= target)
        {
            if ((bt & target) > 0)
            {
                ans.push_back(bt);
                mp[bt]++;
            }

            bt *= 2; // bt = (bt << 1);
        }

        int flag = 0;
        for (auto i : ans)
        {
            if (i >= n)
            {
                flag = 1;
            }
        }

        if (flag == 1)
            no;
        else
        {
            yes;
            for (int i = 1; i < n; ++i)
            {
                if (mp[i] > 0)
                    continue;

                cout << i << spc;
            }
            cout << 0 << spc;
            for (auto i : ans)
                cout << i << spc;
            cout << nl;
        }
    }

    return 0;
}

/*
    https://codeforces.com/contest/2245/problem/C
*/
