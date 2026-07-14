#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, r, b;
        cin >> n >> r >> b;

        string s;
        int redLen = r / (b + 1), extraRed = r % (b + 1);
        for (int i = 1; i <= b + 1; ++i)
        {
            for (int j = 0; j < redLen; ++j)
                s += 'R';

            if (extraRed > 0)
            {
                s += 'R';
                extraRed--;
            }
            if (i != b + 1)
                s += 'B';
        }

        cout << s << nl;
    }

    return 0;
}

/*
    https://codeforces.com/problemset/problem/1659/A
*/
