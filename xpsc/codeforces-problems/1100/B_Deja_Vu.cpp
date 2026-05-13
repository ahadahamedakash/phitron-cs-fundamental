#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> vn(n), vq(q);
        for (ll &i : vn)
            cin >> i;
        for (ll &i : vq)
            cin >> i;

        ll prev = 31;
        for (int i = 0; i < q; ++i)
        {
            if (vq[i] >= prev)
                continue;

            ll val = pow(2, vq[i]);
            for (int j = 0; j < n; ++j)
                if (vn[j] % val == 0)
                    vn[j] += (val / 2);

            prev = vq[i];
        }

        for (ll val : vn)
            cout << val << " ";

        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1891/B
*/
