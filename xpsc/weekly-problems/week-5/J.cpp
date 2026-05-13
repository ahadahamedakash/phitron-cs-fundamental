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
        string s;
        cin >> s;

        int wCnt = 0;

        for (int i = 0; i < k; ++i)
        {
            if (s[i] == 'W')
                wCnt++;
        }

        int ans = wCnt;

        int l = 0, r = k;
        while (r < n)
        {
            if (s[l] == 'W')
                wCnt--;

            l++;

            if (s[r] == 'W')
                wCnt++;

            r++;
            ans = min(ans, wCnt);
        }

        cout << ans << nl;
    }

    return 0;
}
