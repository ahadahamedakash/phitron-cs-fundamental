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
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> cost(n);
        for (int &i : cost)
            cin >> i;

        string s;
        cin >> s;

        vector<int> availables;
        for (int i = 0; i < n; ++i)
            if (s[i] == '0')
                availables.push_back(cost[i]);

        if (availables.size() < k)
        {
            cout << -1 << nl;
            continue;
        }
        sort(all(availables));

        int total = 0;
        for (int i = 0; i < k; ++i)
            total += availables[i];

        cout << total << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/BUYTICK
*/
