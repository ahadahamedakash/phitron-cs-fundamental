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

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;

        ll stickGainedPerTrade = x - 1;
        ll stickNeeded = k * y + k - 1;

        ll trade = 0;

        trade += (stickNeeded + stickGainedPerTrade - 1) / stickGainedPerTrade;
        trade += k;

        cout << trade << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1418/A
*/
