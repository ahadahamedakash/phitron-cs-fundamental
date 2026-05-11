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
    for (ll &i : v)
        cin >> i;

    ll sum1 = 0, sum2 = 0, ans = 0;
    int l = 0, r = n - 1;

    while (l <= r)
    {
        if (sum1 <= sum2)
        {
            sum1 += v[l];
            l++;
        }
        else
        {
            sum2 += v[r];
            r--;
        }

        if (sum1 == sum2)
            ans = sum1;
    }

    cout << ans << nl;

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1006/C
*/
