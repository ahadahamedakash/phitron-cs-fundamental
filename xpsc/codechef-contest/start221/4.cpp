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

bool hasOddNum(ll n)
{
    ll temp = n;
    while (temp > 0)
    {
        ll lastDigit = temp % 10;

        if (lastDigit % 2 == 1)
            return true;

        temp /= 10;
    }

    return false;
}

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if (n < 10 && n % 2 == 0)
        {
            cout << -1 << nl;
            continue;
        }

        vector<ll> d;
        while (n > 0)
        {
            d.push_back(n % 10);
            n /= 10;
        }

        reverse(d.begin(), d.end());
        if (d[d.size() - 1] % 2 == 1)
        {
            cout << 0 << nl;
            continue;
        }

        bool check = false;
        for (ll i = 0; i < d.size(); ++i)
            if (d[i] % 2 == 1)
                check = true;

        if (check)
        {
            cout << 1 << nl;
            continue;
        }

        for (ll i = 0; i < d.size() - 1; ++i)
            if (d[i] > d[d.size() - 1])
                check = true;

        if (check)
        {
            cout << 2 << nl;
            continue;
        }

        cout << 3 << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/LMP3
*/
