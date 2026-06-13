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

ll gcd(ll a, ll b)
{
    while (b)
    {
        ll temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

ll lcm(ll a, ll b)
{
    if (a == 0 || b == 0)
        return 0;
    return (a / gcd(a, b)) * b;
}

int main()
{
    fastIO();

    int n;
    cin >> n;
    vector<ll> v(n);

    for (ll &i : v)
        cin >> i;

    ll mxElem = *max_element(v.begin(), v.end());

    ll y = 0, z = 0;

    for (ll val : v)
        z = gcd(z, (mxElem - val));

    for (ll val : v)
        y += (mxElem - val) / z;

    cout << y << " " << z << nl;

    return 0;
}
