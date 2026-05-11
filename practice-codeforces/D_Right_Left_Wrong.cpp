#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        string s;
        cin >> s;

        vector<ll> pref(n);
        pref[0] = v[0];
        for (int i = 1; i < n; ++i)
            pref[i] = v[i] + pref[i - 1];

        ll sum = 0;
        int lp = n - 1;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'L')
            {
                while (lp > i && s[lp] != 'R')
                    lp--;
                if (lp > i)
                {
                    sum += pref[lp] - (i > 0 ? pref[i - 1] : 0);
                    lp--;
                }
            }
        }

        cout << sum << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/2000/D
*/
