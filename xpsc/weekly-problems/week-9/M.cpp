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

    int n;
    cin >> n;

    vector<ll> v(n);
    for (ll &i : v)
        cin >> i;

    vector<ll> prefSum(n);
    prefSum[0] = v[0];
    for (int i = 1; i < n; ++i)
        prefSum[i] = prefSum[i - 1] + v[i];

    map<ll, ll> mp;
    mp[0] = 1;

    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ll rem = ((prefSum[i] % n) + n) % n;

        ans += mp[rem];
        mp[rem]++;
    }

    cout << ans << nl;

    return 0;
}
