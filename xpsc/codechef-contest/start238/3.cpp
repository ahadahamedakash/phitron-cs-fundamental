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
        int n, x, k;
        cin >> n >> x >> k;

        map<int, int, greater<int>> v;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v[x]++;
        }

        int eligible = 0, clus = 0;
        for (auto val : v)
        {
            eligible += val.second;
            clus++;
            if (clus == k)
                break;
        }

        cout << min(eligible, x) << nl;
    }

    return 0;
}
