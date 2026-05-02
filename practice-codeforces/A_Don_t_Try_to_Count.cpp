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
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int oper = 0;

        while ((int)x.length() < m)
        {
            x += x;
            oper++;
        }

        bool found = false;

        for (int i = 0; i <= 2; i++)
        {
            if (x.find(s) != string::npos)
            {
                cout << oper << nl;
                found = true;
                break;
            }
            x += x;
            oper++;
        }

        if (!found)
            cout << -1 << nl;
    }
    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1881/A
*/
