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
        ll n;
        cin >> n;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        map<ll, ll> mp;
        for (ll val : v)
            mp[val]++;

        ll mxFreq = 0;
        for (auto i : mp)
            mxFreq = max(mxFreq, i.second);

        ll oper = 0;
        while (mxFreq < n)
        {
            oper++;
            if (mxFreq * 2 <= n)
            {
                oper += mxFreq;
                mxFreq *= 2;
            }
            else
            {
                oper += n - mxFreq;
                mxFreq = n;
            }
        }

        cout << oper << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1665/B
*/
