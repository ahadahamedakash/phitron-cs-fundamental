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

    vector<ll> primes;
    for (ll i = 2; i <= 100000; ++i)
    {
        bool isPrime = true;
        for (ll j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            primes.push_back(i);
    }

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll d;
        cin >> d;

        ll p = -1;
        for (int i = 0; i < sz(primes); ++i)
        {
            if (primes[i] >= (1 + d))
            {
                p = primes[i];
                break;
            }
        }

        ll q = -1;
        for (ll i = 0; i < sz(primes); ++i)
        {
            if (primes[i] >= (p + d))
            {
                q = primes[i];
                break;
            }
        }

        ll a = min(1LL * p * p * p, 1LL * p * q);
        cout << a << nl;
    }

    return 0;
}
