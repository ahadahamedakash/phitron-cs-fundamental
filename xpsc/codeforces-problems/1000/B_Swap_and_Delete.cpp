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
        string s;
        cin >> s;

        int zeroCnt = 0, oneCnt = 0, tLen = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '0')
                zeroCnt++;
            else
                oneCnt++;
        }

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '0' && oneCnt > 0)
                oneCnt--, tLen++;
            else if (s[i] == '1' && zeroCnt > 0)
                zeroCnt--, tLen++;
            else
                break;
        }

        cout << s.size() - tLen << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1913/B
*/
