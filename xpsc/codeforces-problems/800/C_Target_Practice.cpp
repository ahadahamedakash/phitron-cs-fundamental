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
        char arr[11][11];

        for (int i = 1; i < 11; ++i)
            for (int j = 1; j < 11; ++j)
                cin >> arr[i][j];

        int points = 0;

        for (int i = 1; i < 11; ++i)
            for (int j = 1; j < 11; ++j)
                if (arr[i][j] == 'X')
                    points += min({i, j, 11 - i, 11 - j});

        cout << points << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1873/C
*/
