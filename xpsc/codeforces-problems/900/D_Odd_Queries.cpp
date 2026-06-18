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

    int t;
    cin >> t;

    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        ll sum = 0;
        for (ll val : v)
            sum += val;

        vector<ll> prefixSum(n + 1, 0);
        for (int i = 1; i <= n; ++i)
            prefixSum[i] = prefixSum[i - 1] + v[i - 1];

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sumToRemove = prefixSum[r] - prefixSum[l - 1];
            ll sumTOAdd = (r - l + 1) * k;
            ll totalSum = sum - sumToRemove + sumTOAdd;

            if (totalSum % 2 == 1)
                yes;
            else
                no;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1807/D
*/
