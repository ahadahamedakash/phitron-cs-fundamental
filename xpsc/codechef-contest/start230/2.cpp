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
        int x, y, z;
        cin >> x >> y >> z;

        int cnt = (x >= 50) + (y >= 50) + (z >= 50);

        cout << (cnt >= 2 ? "Yes" : "No") << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/PASSEXAMS
*/
