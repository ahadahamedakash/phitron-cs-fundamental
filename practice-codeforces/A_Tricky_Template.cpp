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
        string a, b, c;

        cin >> a >> b >> c;

        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if ((c[i] != a[i] && c[i] != b[i]) || (a[i] == b[i] && c[i] != a[i]))
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1922/A
*/
