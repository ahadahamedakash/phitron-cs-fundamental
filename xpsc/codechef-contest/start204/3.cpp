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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        int aliceWon = 0, bobWon = 0;
        for (char ch : s)
        {
            if (ch == '1')
                aliceWon++;
            else
                bobWon++;
        }

        int remMatch = n - m;
        int difference = abs(aliceWon - bobWon);

        if (difference <= remMatch && (remMatch - difference) % 2 == 0)
            yes;
        else
            no;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/DRAWCH
*/
