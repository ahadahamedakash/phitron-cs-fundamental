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
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        bool isPossible = true;

        for (auto [x, y] : mp)
        {
            // cout << x << " -> " << y << nl;
            if (y % x != 0)
            {
                isPossible = false;
                break;
            }
        }

        cout << (isPossible ? "YES" : "NO") << nl;
    }

    return 0;
}
