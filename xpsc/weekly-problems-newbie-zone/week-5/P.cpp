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
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> v(n);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;

            v[i] = x > q ? 0 : 1;
        }

        ll cnt, ways;
        cnt = ways = 0;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] == 1)
                cnt++;
            else
            {
                if (cnt >= k)
                {
                    ll diff = cnt - k + 1;
                    ways += (diff * (diff + 1) / 2);
                }
                cnt = 0;
            }
        }

        if (cnt >= k)
        {
            ll diff = cnt - k + 1;
            ways += (diff * (diff + 1) / 2);
        }

        cout << ways << nl;
    }

    return 0;
}
