#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    ll n;
    cin >> n;

    bool foundLucky = false;

    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 7)
        {
            foundLucky = true;
            break;
        }
        n /= 10;
    }

    if (foundLucky)
        cout << "Lucky" << nl;
    else
        cout << "Not Lucky" << nl;

    return 0;
}
