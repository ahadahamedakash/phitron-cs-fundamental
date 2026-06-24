#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        unordered_map<ll, vector<int>> mp;
        for (int i = 0; i < n; ++i)
        {
            ll val = v[i];
            int cnt = 0;

            while (true)
            {
                mp[val].push_back(cnt);

                if (val == 0)
                    break;

                val /= 2;
                cnt++;
            }
        }

        ll ans = imx;
        for (auto &[x, y] : mp)
        {
            if ((int)y.size() < n)
                continue;

            ll sum = 0;
            for (int c : y)
                sum += c;
            ans = min(ans, sum);
        }

        cout << ans << nl;
    }

    return 0;
}
