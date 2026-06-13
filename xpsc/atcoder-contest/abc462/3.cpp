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

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i].first >> v[i].second;

    sort(all(v));

    int ans = 0, mnVal = INT_MAX;
    for (auto [x, y] : v)
    {
        if (y < mnVal)
        {
            ans++;
            mnVal = y;
        }
    }

    cout << ans << nl;

    return 0;
}

/*
    LINK: https://atcoder.jp/contests/abc462/tasks/abc462_c
*/
