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

        int sum = 0;
        int mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            mx = max(mx, v[i]);
        }

        cout << max((sum + 1) / 2, mx) << nl;
    }

    return 0;
}
