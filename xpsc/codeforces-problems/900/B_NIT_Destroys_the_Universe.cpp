#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
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
        int n;
        cin >> n;

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        int blocks = 0, i = 0;
        while (i < n)
        {
            if (v[i] == 0)
            {
                i++;
                continue;
            }

            blocks++;
            while (i < n && v[i] != 0)
                i++;
        }

        cout << min(blocks, 2) << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1696/B
*/
