#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
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
        ll n, x, y;
        cin >> n >> x >> y;

        vector<ll> v(n + 1);
        for (ll i = 1; i <= n; ++i)
            cin >> v[i];

        ll gc = gcd(x, y);

        vector<vector<ll>> idx(gc);
        vector<vector<ll>> val(gc);

        for (ll i = 1; i <= n; ++i)
        {
            idx[i % gc].push_back(i);
            val[i % gc].push_back(v[i]);
        }

        bool isPoss = true;
        for (ll i = 0; i < gc; ++i)
        {
            sort(all(idx[i]));
            sort(all(val[i]));
            if (idx[i] != val[i])
            {
                isPoss = false;
                break;
            }
        }

        if (isPoss)
            yes;
        else
            no;
    }

    return 0;
}
