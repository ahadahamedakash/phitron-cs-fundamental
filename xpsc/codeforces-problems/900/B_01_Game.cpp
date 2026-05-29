#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "DA\n"
#define no cout << "NET\n"
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

        int zeroCnt = 0, oneCnt = 0;
        int sz = s.size();
        for (int i = 0; i < sz; ++i)
        {
            if (s[i] == '1')
                oneCnt++;
            else
                zeroCnt++;
        }

        int mnPair = min(zeroCnt, oneCnt);

        if (mnPair % 2 != 0)
            yes;
        else
            no;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1373/B
*/
