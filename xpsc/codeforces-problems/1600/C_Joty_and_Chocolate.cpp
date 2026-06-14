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

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    fastIO();

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll cnt1 = (n / a) * p, cnt2 = (n / b) * q, overlap = (n / LCM(a, b));

    ll ans = ((cnt1 + cnt2) - (overlap * (p + q))) + (overlap * max(p, q));

    cout << ans << nl;
    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/678/C
*/
