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

        int oper = INT_MAX;
        for (int i = 1; i < n; ++i)
        {
            if (v[i] >= v[i - 1])
            {
                oper = min((v[i] - v[i - 1]) / 2 + 1, oper);
            }
            else
            {
                oper = 0;
                break;
            }
        }

        cout << oper << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1853/A
*/
