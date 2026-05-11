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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        ll totalXor = 0;
        for (int i = 0; i < n; ++i)
            totalXor ^= v[i];

        if (n % 2 == 1)
        {
            cout << totalXor << nl;
        }
        else
        {
            if (totalXor == 0)
                cout << totalXor << nl;
            else
                cout << -1 << nl;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1805/A
*/
