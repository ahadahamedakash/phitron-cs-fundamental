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
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i].first >> v[i].second;

        int ans = 0;

        for (int i = 0; i < 100; ++i)
        {
            int y = i;
            for (auto [a, b] : v)
            {
                if (y < a)
                    y = a;
                else if (y > b)
                    y = b;
            }

            ans = max(ans, y);
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/SEQCLAMP
*/
