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

        int len = n;

        int first = 0, last = n - 1;
        while (first <= last)
        {
            if (s[first] == s[last])
                break;

            len -= 2;
            first++, last--;
        }

        cout << len << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1791/C
*/
