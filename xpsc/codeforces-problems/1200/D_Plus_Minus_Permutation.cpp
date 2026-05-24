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

ll lcm(ll a, ll b)
{
    return (a * b) / (gcd(a, b));
}

ll calculateSum(ll start, ll end)
{
    ll sum = ((start + end) * (end - start + 1)) / 2;

    return sum;
}

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;

        ll c1 = (n / x) - (n / lcm(x, y));
        ll c2 = (n / y) - (n / lcm(x, y));
        ll ans = calculateSum(n - c1 + 1, n) - calculateSum(1LL, c2);

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1872/D
*/
