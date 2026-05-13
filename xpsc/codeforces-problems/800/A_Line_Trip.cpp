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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;

        int mxFuel = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            int fuel = 0;

            if (i == 0)
                fuel = v[i] - 0;
            else
                fuel = v[i] - v[i - 1];

            mxFuel = max(fuel, mxFuel);
        }

        mxFuel = max(mxFuel, 2 * (x - v[n - 1]));

        cout << mxFuel << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1901/A
*/
