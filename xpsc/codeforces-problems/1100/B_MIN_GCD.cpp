#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        ll mn = *min_element(v.begin(), v.end());
        ll mnCnt = 0;
        for (ll val : v)
            if (val == mn)
                mnCnt++;

        if (mnCnt > 1)
        {
            yes;
            continue;
        }

        ll g = 0;
        for (ll val : v)
            if (val != mn && val % mn == 0)
                g = gcd(g, val);

        if (g == mn)
            yes;
        else
            no;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/2084/B
*/
