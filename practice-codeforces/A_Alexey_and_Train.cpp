#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
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
        vector<ll> a(n), b(n), t(n);

        for (int i = 0; i < n; ++i)
            cin >> a[i] >> b[i];
        for (int i = 0; i < n; ++i)
            cin >> t[i];

        ll curr = 0;

        for (int i = 0; i < n; ++i)
        {
            ll preDep = i == 0 ? 0 : b[i - 1];

            ll arrive = curr + (a[i] - preDep) + t[i];

            if (i == n - 1)
            {
                cout << arrive << nl;
                break;
            }

            ll stay = (b[i] - a[i] + 1) / 2;

            curr = max(arrive + stay, b[i]);
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1501/A
*/
