#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s[0] != s[s.size() - 1])
        {
            if (s[0] == 'a')
                s[0] = 'b';
            else
                s[0] = 'a';
        }

        cout << s << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1606/A
*/
