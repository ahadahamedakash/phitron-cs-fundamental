#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
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

        for (int i = 0; i < n; ++i)
            if (v[i] == 1)
                v[i]++;

        for (int i = 0; i < n - 1; ++i)
            if (v[i + 1] % v[i] == 0)
                v[i + 1]++;

        for (int val : v)
            cout << val << " ";

        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1794/B
*/
