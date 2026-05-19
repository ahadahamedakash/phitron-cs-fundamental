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
        int n;
        cin >> n;

        int cost = INT_MAX;

        for (int y = n / 3; y >= 0; y--)
        {
            int remaining = n - 3 * y;
            if (remaining % 2 == 0)
            {
                int x = remaining / 2;
                cost = min(cost, 4 * x + 5 * y);
            }
        }

        cout << cost << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/FLOWERBUY
*/
