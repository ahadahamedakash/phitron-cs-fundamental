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

        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;

            v.push_back({a, i});
            v.push_back({b, i});
            v.push_back({c, i});
        }

        sort(all(v));

        vector<int> cnt(n, 0);
        int covered = 0;

        int l = 0;
        ll ans = LLONG_MAX;

        for (int r = 0; r < (int)v.size(); r++)
        {
            int idx = v[r].second;

            if (cnt[idx] == 0)
                covered++;
            cnt[idx]++;

            while (covered == n)
            {
                ans = min(ans, (ll)v[r].first - v[l].first);

                int leftIdx = v[l].second;
                cnt[leftIdx]--;
                if (cnt[leftIdx] == 0)
                    covered--;

                l++;
            }
        }
        cout << ans << nl;
    }

    return 0;
}
