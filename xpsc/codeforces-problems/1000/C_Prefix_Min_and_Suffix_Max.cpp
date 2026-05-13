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
        vector<int> v(n), pre(n), suff(n);

        for (int &i : v)
            cin >> i;

        pre[0] = v[0];
        suff[n - 1] = v[n - 1];

        for (int i = 1; i < n; ++i)
        {
            pre[i] = min(pre[i - 1], v[i]);
        }

        for (int i = n - 2; i >= 0; --i)
        {
            suff[i] = max(suff[i + 1], v[i]);
        }

        for (int i = 0; i < n; ++i)
        {
            if (v[i] == suff[i] || v[i] == pre[i])
                cout << 1;
            else
                cout << 0;
        }

        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/2123/C
*/
