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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;

        ll mnS = k * b, mxS = (k * b) + (k - 1) * n;

        if (s < mnS || s > mxS)
            cout << -1 << nl;
        else
        {
            vector<ll> ans(n, 0);
            ans[0] = mnS;
            s -= mnS;

            for (int i = 0; i < n; ++i)
            {
                ll add = min(k - 1, s);
                ans[i] += add;
                s -= add;
            }

            for (ll val : ans)
                cout << val << spc;

            cout << nl;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1715/B
*/
