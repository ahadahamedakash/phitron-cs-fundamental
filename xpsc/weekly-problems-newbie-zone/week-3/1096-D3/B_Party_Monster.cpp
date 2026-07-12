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

        int open = 0, close = 0;

        for (char c : s)
        {
            if (c == '(')
                open++;
            else
                close++;
        }

        if (open == close)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
