#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define ld long double
#define ll long long int
#define finite cout << "Finite\n"
#define infinite cout << "Infinite\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll p, q, b;
        cin >> p >> q >> b;

        q /= gcd(p, q);

        while (true)
        {
            ll g = gcd(q, b);
            if (g == 1)
                break;

            while (q % g == 0)
                q /= g;
        }

        if (q == 1)
            finite;
        else
            infinite;
    }

    return 0;
}
