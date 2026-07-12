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
        int n, k;
        cin >> n >> k;

        vector<int> a(n), h(n);
        for (int &i : a)
            cin >> i;

        for (int &i : h)
            cin >> i;

        int l = 0, ans = 0;
        ll sum = 0;
        for (int r = 0; r < n; ++r)
        {
            if (r > 0 && h[r - 1] % h[r] != 0)
            {
                l = r;
                sum = 0;
            }

            sum += a[r];

            while (sum > k)
            {
                sum -= a[l];
                l++;
            }

            ans = max(ans, r - l + 1);
        }

        cout << ans << nl;
    }

    return 0;
}
