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
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        int total = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            total += v[i];
        }

        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int t = (total + v[i] + v[j]) / 2;

                if (t > k)
                    ans++;
            }
        }

        cout << ans << nl;
    }

    return 0;
}
