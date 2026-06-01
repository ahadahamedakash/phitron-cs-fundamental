#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        int fixed = v[0];

        vector<int> cnt;
        for (auto &i : mp)
            if (i.first != fixed)
                cnt.push_back(i.second);

        sort(all(cnt));

        int distinct = mp.size();
        int removed = 0;

        for (int val : cnt)
        {
            if (k >= val)
            {
                k -= val;
                removed++;
            }
            else
                break;
        }

        cout << distinct - removed << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/MINDIS6
*/
