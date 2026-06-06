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

bool isFair(ll n)
{
    ll num = n;
    while (num != 0)
    {
        int x = num % 10;
        if (x != 0 && n % x != 0)
            return false;

        num /= 10;
    }

    return true;
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

        while (!isFair(n))
            n += 1;

        cout << n << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1411/B
*/
