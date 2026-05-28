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
    t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), a, b;
        for (int &i : v)
            cin >> i;

        int mxElem = *max_element(v.begin(), v.end());

        for (int i = 0; i < n; ++i)
        {
            if (v[i] != mxElem)
                a.push_back(v[i]);
            else
                b.push_back(v[i]);
        }

        if (a.size() == 0)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << a.size() << " " << b.size() << nl;

            for (int val : a)
                cout << val << " ";
            cout << nl;

            for (int val : b)
                cout << val << " ";
            cout << nl;
        }
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1859/A
*/
