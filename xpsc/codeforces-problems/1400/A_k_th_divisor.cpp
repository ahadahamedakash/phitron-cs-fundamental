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

    ll n, k;
    cin >> n >> k;

    vector<ll> smallDivi, largeDivi, allDivi;

    for (ll i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            smallDivi.push_back(i);

            if (i != n / i)
                largeDivi.push_back(n / i);
        }
    }

    allDivi = smallDivi;
    reverse(largeDivi.begin(), largeDivi.end());

    for (ll val : largeDivi)
        allDivi.push_back(val);

    if (k > (ll)allDivi.size())
        cout << -1 << nl;
    else
        cout << allDivi[k - 1] << nl;

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/762/A
*/
