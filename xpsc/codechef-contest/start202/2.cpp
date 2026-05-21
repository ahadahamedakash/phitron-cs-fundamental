#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
        int x, y;
        cin >> x >> y;

        int needScore = 50 - x;

        if (needScore >= 2 * y && needScore <= 2 * y + 10)
            yes;
        else
            no;
    }

    return 0;
}

/*
    LINK: https: // www.codechef.com/problems/TWOROLL
*/
