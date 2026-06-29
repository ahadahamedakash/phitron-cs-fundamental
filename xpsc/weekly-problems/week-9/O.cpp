#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define llmx LLONG_MAX
#define llmn LLING_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

void divideApples(vector<ll> &v, ll &ans, int idx, ll groupOne, ll groupTwo)
{
    if (idx == (int)v.size())
    {
        ans = min(ans, abs(groupOne - groupTwo));
        return;
    }

    divideApples(v, ans, idx + 1, groupOne + v[idx], groupTwo);
    divideApples(v, ans, idx + 1, groupOne, groupTwo + v[idx]);
}

int main()
{
    fastIO();

    int n;
    cin >> n;

    vector<ll> weights(n);
    for (ll &i : weights)
        cin >> i;

    ll ans = llmx;
    divideApples(weights, ans, 0, 0, 0);

    cout << ans << nl;

    return 0;
}

/*
    LINK: https://cses.fi/problemset/task/1623
*/
