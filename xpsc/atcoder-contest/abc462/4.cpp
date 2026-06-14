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

    int n, d;
    cin >> n >> d;
    vector<ll> cnt(1e6 + 5, 0);

    for (int i = 0; i < n; ++i)
    {
        int s, t;
        cin >> s >> t;

        if (s <= t - d)
        {
            cnt[s]++;
            cnt[t - d + 1]--;
        }
    }

    ll ans = 0, curr = 0;

    for (int i = 0; i < 1e6; ++i)
    {
        curr += cnt[i];
        ans += curr * (curr - 1) / 2;
    }

    cout << ans << nl;

    return 0;
}

/*
    LINK: https://atcoder.jp/contests/abc462/tasks/abc462_d
*/
