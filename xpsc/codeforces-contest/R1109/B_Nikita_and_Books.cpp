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

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<ll> v(n);
        for (ll &i : v)
            cin >> i;

        vector<ll> pref(n);
        pref[0] = v[0];
        for (ll i = 1; i < n; ++i)
            pref[i] = pref[i - 1] + v[i];

        bool isPossible = true;
        for (ll i = 0; i < n; ++i)
            if (pref[i] < (i + 1) * (i + 2) / 2)
                isPossible = false;

        if (!isPossible)
            no;
        else
            yes;
    }

    return 0;
}
