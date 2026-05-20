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

    int x, y, z;
    cin >> x >> y >> z;

    int cost = 0;
    if (z <= 50)
        cost = x;
    else
        cost = x + (z - 50) * y;

    cout << cost << nl;

    return 0;
}
