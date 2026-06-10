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

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        if (a == b)
            cout << 0 << nl;
        else if (gcd(a, c) == gcd(b, c))
            cout << 1 << nl;
        else if (gcd(a, c + 1) == gcd(b, c + 1))
            cout << 2 << nl;
        else
            cout << 3 << nl;
    }

    return 0;
}
