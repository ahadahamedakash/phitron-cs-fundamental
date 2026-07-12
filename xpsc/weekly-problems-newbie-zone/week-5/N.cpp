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

    vector<ll> prefSum(n);
    prefSum[0] = v[0];

    for (int i = 1; i < n; ++i)
        prefSum[i] = v[i] + prefSum[i - 1];

    ll cnt = 0;
    unordered_map<ll, ll> mp;
    mp[0] = 1;

    for (int i = 0; i < n; ++i)
    {
        ll val = prefSum[i] - x;
        if (mp.find(val) != mp.end())
            cnt += mp[val];

        mp[prefSum[i]]++;
    }

    cout << cnt << nl;

    return 0;
}
