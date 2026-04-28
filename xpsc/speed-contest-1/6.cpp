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
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int cost = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            int total = v[i] + v[i + 1];
            cost = min(cost, total);
        }

        cout << cost << nl;
    }

    return 0;
}
