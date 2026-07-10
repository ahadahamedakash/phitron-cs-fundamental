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

int main()
{
    fastIO();

    ll n, d;
    cin >> n >> d;

    vector<ll> v(n);
    for (ll &i : v)
        cin >> i;

    sort(all(v));

    ll lt = -1, rt = n - 1;
    ll teamSize = 1, teams = 0;
    while (lt < rt)
    {
        if ((v[rt] * teamSize) <= d && lt < rt)
        {
            lt++;
            teamSize++;
        }
        else
        {
            teams++;
            rt--;
            teamSize = 1;
        }
    }

    cout << teams << nl;

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1725/B
*/
