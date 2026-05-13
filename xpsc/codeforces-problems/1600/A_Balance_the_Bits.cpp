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
        string s;
        cin >> s;

        int oneCnt = 0;
        for (char c : s)
            if (c == '1')
                oneCnt++;

        if (oneCnt % 2 != 0 || s[0] == '0' || s[n - 1] == '0')
        {
            cout << "NO" << nl;
            continue;
        }

        cout << "YES" << nl;

        string a(n, ' '), b(n, ' ');

        int half = oneCnt / 2;
        int used = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (used < half)
                {
                    a[i] = b[i] = '(';
                    used++;
                }
                else
                {
                    a[i] = b[i] = ')';
                }
            }
        }

        bool flip = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (flip)
                {
                    a[i] = '(';
                    b[i] = ')';
                }
                else
                {
                    a[i] = ')';
                    b[i] = '(';
                }
                flip = !flip;
            }
        }

        cout << a << nl << b << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1503/A
*/
