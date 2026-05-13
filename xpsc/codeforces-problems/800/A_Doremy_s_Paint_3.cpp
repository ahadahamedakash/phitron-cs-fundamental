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
        int n;
        cin >> n;

        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        if (mp.size() > 2)
        {
            cout << "No" << nl;
        }
        else
        {
            if (mp.size() == 2)
            {
                vector<int> v2;
                for (auto p : mp)
                    v2.push_back(p.second);

                if (abs(v2[0] - v2[1]) > 1)
                    cout << "No" << nl;
                else
                    cout << "Yes" << nl;
            }
            else
            {
                cout << "Yes" << nl;
            }
        }
    }

    return 0;
}

/*
while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<int, int> freq;

        for (int x : v)
            freq[x]++;

        int mx = 0;
        for (auto it : freq)
            mx = max(mx, it.second);

        int limit = (n + 1) / 2;

        if (mx <= limit)
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
    }
*/

/*
    LINK: https://codeforces.com/contest/1890/problem/A
*/
