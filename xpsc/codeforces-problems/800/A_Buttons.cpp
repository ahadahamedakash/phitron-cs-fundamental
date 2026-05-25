#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define first cout << "First\n"
#define second cout << "Second\n"
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
        ll a, b, c;
        cin >> a >> b >> c;

        if (c % 2 == 1)
        {
            if (b > a)
                second;
            else
                first;
        }
        else
        {
            if (a > b)
                first;
            else
                second;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1858/A
*/
