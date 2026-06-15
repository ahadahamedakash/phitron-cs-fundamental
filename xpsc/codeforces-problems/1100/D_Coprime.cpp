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

vector<int> pairs[1001];

int main()
{
    fastIO();

    for (int i = 1; i <= 1000; ++i)
        for (int j = 1; j <= 1000; ++j)
            if (__gcd(i, j) == 1)
                pairs[i].push_back(j);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> idx(1001, 0);
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            idx[x] = i;
        }

        int ans = -1;
        for (int i = 1; i <= 1000; ++i)
        {
            if (idx[i] == 0)
            {
                continue;
            }
            for (int j : pairs[i])
            {
                if (idx[j] != 0)
                {
                    ans = max(ans, idx[i] + idx[j]);
                }
            }
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1742/D
*/
