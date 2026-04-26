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
        int n, k;
        cin >> n >> k;
        int sz = k * n;
        vector<int> v(sz);

        for (int i = 0; i < sz; i++)
            cin >> v[i];

        ll sum = 0;
        int m = (n + 1) / 2;
        int right = n - m;
        int step = right + 1;
        int i = sz - 1 - right;

        for (int j = 0; j < k; j++)
        {
            sum += v[i];
            i -= step;
        }

        cout << sum << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1440/B
*/
