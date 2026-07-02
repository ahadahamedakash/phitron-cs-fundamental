#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll n, k;
        cin >> n >> k;
        ll totalSum = n * (n + 1) / 2, currSum = 0;
        vector<ll> v;
        for (int i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            currSum += x;
        }

        v.push_back(totalSum - currSum);
        k = k % (n + 1);

        for (int i = 0; i < n; ++i)
            cout << v[(i - k + n + 1) % (n + 1)] << spc;

        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1863/C
*/
