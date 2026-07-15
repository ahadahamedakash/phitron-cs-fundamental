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

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    auto isPoss = [&](ll median)
    {
        ll cnt = 0;
        for (int i = (n / 2); i < n; ++i)
            cnt += (v[i] < median ? (median - v[i]) : 0);

        return cnt <= k;
    };

    sort(all(v));

    int l = 1, r = 2e9, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (isPoss(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << ans << nl;

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1201/C
*/
