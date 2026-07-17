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
        ll w, h;
        cin >> w >> h;
        ll area = imn;

        for (int i = 0; i < 4; ++i)
        {
            ll k;
            cin >> k;

            ll first, last;
            for (int j = 0; j < k; ++j)
            {
                ll x;
                cin >> x;
                if (j == 0)
                    first = x;
                if (j == k - 1)
                    last = x;
            }

            ll base = last - first;
            ll height;
            if (i <= 1)
                height = h;
            else
                height = w;

            area = max(area, base * height);
        }

        cout << area << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1620/B
*/
