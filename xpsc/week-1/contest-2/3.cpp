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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        set<int> res;

        int mid = (n - k - 1) / 2;

        for (int i = 0; i + (n - k) <= n; i++)
        {
            int median = v[i + mid];
            res.insert(median);
        }

        for (auto i : res)
        {
            cout << i << " ";
        }

        cout << nl;
    }

    return 0;
}
