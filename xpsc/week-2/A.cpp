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
        string s;
        cin >> n >> s;

        int fPos = -1, lPos = -1;
        fPos = s.find('B');
        lPos = s.rfind('B');

        int res = lPos - fPos + 1;
        cout << res << nl;
    }

    return 0;
}

/*

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<char> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        if (n == 1)
        {
            if (v[0] == 'W')
                cout << 0 << nl;
            else
                cout << 1 << nl;

            continue;
        }

        int l = 0;
        while (l < n && v[l] == 'W')
            l++;

        int r = n - 1;
        while (r >= 0 && v[r] == 'W')
            r--;

        cout << r - l + 1 << nl;
    }

    return 0;
}
*/

/*
    LINK: https://codeforces.com/problemset/problem/1927/A
*/
