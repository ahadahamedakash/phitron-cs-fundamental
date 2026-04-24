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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            v[i] = i;

        vector<pair<int, int>> op;

        for (int i = n; i > 1; i--)
        {
            op.push_back({v[i], v[i - 1]});
            int x = (v[i] + v[i - 1] + 1) / 2;
            v[i - 1] = x;
        }

        cout << v[1] << nl;
        for (auto [x, y] : op)
        {
            cout << x << " " << y << nl;
        }
    }

    return 0;
}
