#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << a * 2 << nl;
    }
    else
    {
        int high = max(a, b);
        cout << high * 2 - 1 << nl;
    }

    return 0;
}
