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
    t = 1;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        map<ll, ll> freq;
        ll sum = 0;

        for (ll i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            freq[x]++;
            sum += x;
        }

        ll ans = sum;
        ll currSum = sum;

        for (int k = 1; k < m; ++k)
        {
            ll cnt = freq[(m - k) % m];

            currSum = currSum + n - m * cnt;

            ans = min(ans, currSum);
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/MINSMODM
*/
