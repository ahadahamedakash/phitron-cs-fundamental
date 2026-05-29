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

        int mn = INT_MAX;
        int cnt = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            mn = min(mn, v[i]);
        }

        for (int i = 0; i < n; ++i)
            if (v[i] == mn)
                cnt++;

        if (cnt >= 2)
            yes;
        else
            no;
    }

    return 0;
}