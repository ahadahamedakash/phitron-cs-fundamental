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

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 0; i <= n; ++i)
            cin >> v[i];

        int ans = INT_MAX;
        for (int i = 0; i < n; ++i)
            ans = min(ans, max(v[i], v[i + 1]));

        cout << ans << nl;
    }

    return 0;
}
