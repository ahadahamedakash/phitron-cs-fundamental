#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        v[i] = {val, i};
    }

    sort(all(v));

    for (int i = 0; i < n - 2; ++i)
    {
        int tar = x - v[i].first;
        int l = i + 1, r = n - 1;

        while (l < r)
        {
            ll sum = v[l].first + v[r].first;
            if (sum == tar)
            {
                cout << v[i].second + 1 << " " << v[l].second + 1 << " " << v[r].second + 1 << nl;
                return 0;
            }
            else if (sum < tar)
                l++;
            else
                r--;
        }
    }

    cout << "IMPOSSIBLE" << nl;

    return 0;
}
