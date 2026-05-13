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

        for (auto &i : v)
            cin >> i;

        int l = 0, r = n - 1;
        int mn = 1, mx = n;

        while (l <= r)
        {
            if (v[l] == mn)
            {
                l++, mn++;
            }
            else if (v[l] == mx)
            {
                l++, mx--;
            }
            else if (v[r] == mn)
            {
                r--, mn++;
            }
            else if (v[r] == mx)
            {
                r--, mx--;
            }
            else
            {
                break;
            }
        }

        if (l > r)
            cout << -1 << nl;
        else
            cout << l + 1 << " " << r + 1 << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1793/C
*/
