#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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

        int ans = 0, mx = INT_MIN;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];

            if (v[i] > mx)
            {
                mx = v[i];
                ans = 1;
            }
            else if (v[i] == mx)
            {
                ans++;
            }
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/2200/A
*/
