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

        int zero = 0, nonZero = 0, ans = 0;

        for (auto &i : v)
        {
            cin >> i;
            if (i > 0)
                nonZero++;
            else
                zero++;
        }

        if (zero == 0)
        {
            ans = 0;
        }
        else
        {
            if (nonZero >= zero - 1)
            {
                ans = 0;
            }
            else
            {
                int mx = *max_element(v.begin(), v.end());

                if (mx == 1)
                    ans = 2;
                else
                    ans = 1;
            }
        }

        cout << ans << nl;
    }

    return 0;
}
