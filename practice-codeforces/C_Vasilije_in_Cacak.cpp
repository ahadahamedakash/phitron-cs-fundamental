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
        ll n, k, x;
        cin >> n >> k >> x;

        ll minSum = (k * (k + 1)) / 2;
        ll maxSum = ((n * (n + 1)) / 2) - ((n - k) * (n - k + 1)) / 2;

        if (x >= minSum && x <= maxSum)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1878/C
*/
