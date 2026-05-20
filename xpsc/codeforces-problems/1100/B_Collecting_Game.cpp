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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            v.push_back({x, i});
        }

        vector<ll> pref(n);
        sort(v.begin(), v.end());
        pref[0] = v[0].first;

        for (ll i = 1; i < n; ++i)
            pref[i] = pref[i - 1] + v[i].first;

        vector<ll> ans(n);
        for (ll i = 0; i < n; ++i)
        {
            int j = i;
            int found = i;
            while (j < n)
            {
                pair<ll, ll> temp = {pref[j] + 1, INT_MIN};
                ll idx = lower_bound(v.begin(), v.end(), temp) - v.begin();
                idx--;

                if (j == idx)
                    break;
                found += idx - j;
                j = idx;
            }
            ans[v[i].second] = found;
        }

        for (ll val : ans)
            cout << val << " ";

        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1904/B
*/
