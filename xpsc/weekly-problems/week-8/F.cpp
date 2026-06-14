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

const ll MOD = 1e9 + 7;

ll binExpo(ll a, ll b)
{
    ll res = 1;
    a %= MOD;

    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % MOD;

        a = (a * a) % MOD;
        b >>= 1;
    }

    return res;
}

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        cout << binExpo(a, b) << nl;
    }

    return 0;
}
