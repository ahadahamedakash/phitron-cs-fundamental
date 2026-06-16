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
        ll n;
        cin >> n;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        unordered_set<ll> st;
        for (ll val : v)
            st.insert(val);

        if (st.size() < n)
            yes;
        else
            no;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1438/B
*/

/*
int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        map<ll, int> mp;

        for (int i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }

        bool isPossible = false;
        for (auto [x, y] : mp)
        {
            if (y > 1)
            {
                isPossible = true;
                break;
            }
        }

        if (isPossible)
            yes;
        else
            no;
    }

    return 0;
}
*/
