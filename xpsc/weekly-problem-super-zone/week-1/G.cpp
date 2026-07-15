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

    int n, t;
    cin >> n >> t;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    auto isPoss = [&](ll seconds)
    {
        ll cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            cnt += seconds / v[i];
            if (cnt >= t)
                return true;
        }

        return cnt >= t;
    };

    ll l = 1, r = 1e18, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (isPoss(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans << nl;

    return 0;
}
