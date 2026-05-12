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
        string s;
        cin >> s;

        int ans = INT_MAX;

        for (char c = 'a'; c <= 'z'; ++c)
        {
            int temp = 0;
            bool isPossible = true;

            int l = 0, r = n - 1;

            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++, r--;
                    continue;
                }
                else if (s[l] == c)
                {
                    temp++;
                    l++;
                }
                else if (s[r] == c)
                {
                    temp++;
                    r--;
                }
                else
                {
                    isPossible = false;
                    break;
                }
            }

            if (!isPossible)
                temp = INT_MAX;

            ans = min(temp, ans);
        }

        if (ans == INT_MAX)
            ans = -1;
        cout << ans << nl;
    }

    return 0;
}
