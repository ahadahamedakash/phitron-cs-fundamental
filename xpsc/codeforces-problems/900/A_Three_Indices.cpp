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

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        bool isPoss = false;

        for (int i = 1; i < n - 1; ++i)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
            {
                yes;
                cout << i << " " << i + 1 << " " << i + 2 << nl;
                isPoss = true;
                break;
            }
        }

        if (!isPoss)
            no;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1380/A
*/
