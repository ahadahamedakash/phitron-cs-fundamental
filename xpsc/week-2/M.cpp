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
    cin >> n;
    vector<ll> v(n);
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    ll cnt = 0;

    for (auto &it : mp)
        cnt = max(cnt, (ll)it.second);

    cout << cnt << nl;

    return 0;
}
