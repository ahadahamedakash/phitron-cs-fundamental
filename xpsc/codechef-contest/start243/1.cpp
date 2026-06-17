#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define interesting cout << "Interesting\n"
#define boring cout << "Boring\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int x, y;
    cin >> x >> y;

    if (abs(x - y) < 3)
        interesting;
    else
        boring;

    return 0;
}
