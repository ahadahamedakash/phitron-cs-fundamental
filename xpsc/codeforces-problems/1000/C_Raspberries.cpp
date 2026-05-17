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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        int evenCnt = 0, ans = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] % 2 == 0)
                evenCnt++;
            if (v[i] % k == 0)
                ans = 0;

            ans = min(ans, (k - v[i] % k));
        }

        if (k == 4)
        {
            if (evenCnt >= 2)
                ans = min(ans, 0);
            else if (evenCnt == 1)
                ans = min(ans, 1);
            else if (evenCnt == 0)
                ans = min(ans, 2);
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1883/C
*/
