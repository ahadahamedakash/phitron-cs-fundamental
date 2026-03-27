#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n;
    cin >> n;

    int x;
    ll total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        total += x;
    }

    cout << (abs(total) + 1) / 2 << nl;

    return 0;
}

/*
INPUT:
    8
    -1 -1 -1 0 0 1 1 0
*/
