#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define ld long double
#define ll long long int
#define no cout << "No\n"
#define yes cout << "Yes\n"
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
        ll n;
        cin >> n;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        ll flag = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (gcd(v[i], v[j]) <= 2)
                    flag = 1;
            }
        }

        if (flag == 0)
            no;
        else
            yes;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1789/A
*/
