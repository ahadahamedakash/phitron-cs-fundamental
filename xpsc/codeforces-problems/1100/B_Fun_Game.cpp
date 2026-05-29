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

    int T = 1;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        if (s == t || s[0] == '1')
        {
            yes;
            continue;
        }

        int pos = -1;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                pos = i;
                break;
            }
        }

        if (pos == -1)
        {
            no;
            continue;
        }

        int isPossible = true;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] != t[i])
            {
                if (pos > i)
                {
                    isPossible = false;
                    break;
                }
            }
        }

        if (isPossible)
            yes;
        else
            no;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1994/B
*/
