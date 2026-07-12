#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (ll &i : v)
        cin >> i;

    map<ll, int> mp;
    ll l, distinct, ans;
    l = distinct = ans = 0;

    for (int r = 0; r < n; ++r)
    {
        if (mp[v[r]] == 0)
            distinct++;

        mp[v[r]]++;

        while (distinct > k)
        {
            mp[v[l]]--;

            if (mp[v[l]] == 0)
                distinct--;

            l++;
        }

        ans += r - l + 1;
    }

    cout << ans << nl;

    return 0;
}
