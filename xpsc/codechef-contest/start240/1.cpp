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

    int x, y, a, b;
    cin >> x >> y >> a >> b;

    if (x > a)
    {
        cout << "Alice" << nl;
    }
    else if (a > x)
    {
        cout << "Bob" << nl;
    }
    else
    {
        if (y > b)
        {
            cout << "Alice" << nl;
        }
        else if (b > y)
        {
            cout << "Bob" << nl;
        }
        else
        {
            cout << "Alice" << nl;
        }
    }

    return 0;
}