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

bool check(ll x)
{
    ll countOfDigits = 0, countOfZeroes = 0;
    while (x)
    {
        if (x % 10 == 0)
            countOfZeroes++;
        countOfDigits++;
        x /= 10;
    }

    return countOfZeroes == countOfDigits - 1;
}

int main()
{
    fastIO();

    vector<ll> roundNumbers;
    for (ll i = 1; i <= 999999; ++i)
        if (check(i) == true)
            roundNumbers.push_back(i);

    int tc;
    cin >> tc;

    while (tc--)
    {
        ll n;
        cin >> n;

        ll ans = 0;
        for (int i = 0; i < roundNumbers.size(); ++i)
        {
            if (roundNumbers[i] <= n)
                ans++;
            else
                break;
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1766/A
*/
