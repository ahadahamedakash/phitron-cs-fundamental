#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n;
    ll x;
    cin >> n >> x;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    map<ll, ll> mp;
    mp[0] = 1;

    ll pref = 0, cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        pref += v[i];

        if (mp.find(pref - x) != mp.end())
            cnt += mp[pref - x];

        mp[pref]++;
    }

    cout << cnt << nl;

    return 0;
}
