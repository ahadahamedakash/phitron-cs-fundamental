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

        int i = 0, ans = 0;

        while (i < n)
        {
            if (v[i] == 0)
            {
                int cnt = 0;
                while (i < n && v[i] != 1)
                {
                    cnt++, i++;
                }
                ans = max(ans, cnt);
            }
            else
            {
                i++;
            }
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1829/B
*/
