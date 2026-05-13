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

        int maj;
        if (v[0] == v[1] || v[0] == v[2])
            maj = v[0];
        else
            maj = v[1];

        for (int i = 0; i < n; i++)
        {
            if (v[i] != maj)
            {
                cout << i + 1 << nl;
                break;
            }
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1512/A
*/
