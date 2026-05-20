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

        map<int, vector<int>> mp;

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            mp[x].push_back(i);
        }

        int mnCost = INT_MAX;

        for (auto [x, y] : mp)
        {
            if (y.size() > 1)
            {
                int first = y.front();
                int last = y.back();

                mnCost = min(mnCost, (first + (n - 1 - last)));
            }
        }
        if (mnCost == INT_MAX)
            mnCost = -1;

        cout << mnCost << nl;
    }

    return 0;
}
