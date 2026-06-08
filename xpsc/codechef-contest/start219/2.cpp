#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define small cout << "Small\n"
#define large cout << "Large\n"
#define equal cout << "Equal\n"
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
        int a, b;
        cin >> a >> b;

        ld smallArea = a / 100.0;
        ld largeArea = b / 225.0;

        if (smallArea == largeArea)
            equal;
        else if (smallArea > largeArea)
            large;
        else
            small;
    }

    return 0;
}
