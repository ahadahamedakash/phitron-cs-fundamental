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
        int n;
        cin >> n;
        vector<ll> v(n + 1);
        for (int i = 1; i <= n; ++i)
            cin >> v[i];

        ll oddGcd = 0, evenGcd = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (i % 2 != 0)
                oddGcd = gcd(oddGcd, v[i]);
            else
                evenGcd = gcd(evenGcd, v[i]);
        }

        bool isPossible = true;
        for (int i = 1; i <= n; i += 2)
            if (v[i] % evenGcd == 0)
                isPossible = false;

        if (isPossible)
        {
            cout << evenGcd << nl;
            continue;
        }

        isPossible = true;
        for (int i = 2; i <= n; i += 2)
            if (v[i] % oddGcd == 0)
                isPossible = false;

        if (isPossible)
            cout << oddGcd << nl;
        else
            cout << 0 << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1618/C
*/
