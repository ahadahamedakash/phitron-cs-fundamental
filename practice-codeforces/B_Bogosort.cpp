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

        sort(v.rbegin(), v.rend());

        for (int val : v)
            cout << val << " ";
        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1312/B
*/
