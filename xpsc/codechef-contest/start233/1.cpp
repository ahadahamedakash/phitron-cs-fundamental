#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n = 1;
    cin >> n;

    if (n >= 5)
        cout << n * 85 << nl;
    else
        cout << n * 100 << nl;

    return 0;
}
