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

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;

    return true;
}

ll findDivisor(ll n)
{
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return i;
}

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        if (l <= 3 && r <= 3)
        {
            cout << -1 << nl;
            continue;
        }

        if (r - l >= 1)
        {
            if (r % 2)
                r--;
            cout << r / 2 << ' ' << r / 2 << nl;
            continue;
        }

        if (isPrime(l))
        {
            cout << -1 << nl;
            continue;
        }
        else
        {
            cout << findDivisor(l) << ' ' << l - findDivisor(l) << nl;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1872/C
*/
