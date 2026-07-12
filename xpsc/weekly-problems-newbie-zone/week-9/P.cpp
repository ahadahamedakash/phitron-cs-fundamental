#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
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

        ll mnVal = llmx;
        for (int i = 0; i < n - 1; ++i)
        {
            mnVal = min(mnVal, max(v[i], v[i + 1]));
        }

        cout << mnVal - 1 << nl;
    }

    return 0;
}
