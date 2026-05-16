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

        sort(all(v));
        int ans = INT_MIN;
        for (int k = 2; k < 101; k++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l < r)
            {
                int sum = v[l] + v[r];
                if (sum == k)
                {
                    cnt++;
                    l++, r--;
                }
                else if (sum < k)
                    l++;
                else
                    r--;

                ans = max(ans, cnt);
            }
        }
        if (ans == INT_MIN)
            ans = 0;

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1399/C
*/
