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
        if (n % 2 != 0)
        {
            cout << "NO" << nl;
            continue;
        }

        char ch = 'A';
        cout << "YES" << nl;
        for (int i = 0; i < n; i += 2)
        {
            cout << ch << ch;
            ch++;
            if (ch > 'Z')
                ch = 'A';
        }

        cout << nl;
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
        if (n % 2 != 0)
        {
            cout << "NO" << nl;
            continue;
        }

        cout << "YES" << nl;
        string str = "AA";

        for (int i = 0; i < n / 2; i++)
        {
            cout << str;

            if (str == "AA")
                str = "BB";
            else
                str = "AA";
        }

        cout << nl;
    }

    return 0;
}
*/

/*
    LINK: https://codeforces.com/contest/1948/problem/A
*/
