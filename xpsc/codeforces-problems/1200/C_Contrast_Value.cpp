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

        vector<ll> res;
        for (int i = 0; i < n - 1; ++i)
        {
            int val = v[i] - v[i + 1];
            if (val != 0)
            {
                if (sz(res) > 0)
                {
                    int x = res.back();
                    if (x > 0 && val < 0)
                        res.push_back(val);
                    else if (x < 0 && val > 0)
                        res.push_back(val);
                }
                else
                    res.push_back(val);
            }
        }

        cout << sz(res) + 1 << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1832/C
*/
