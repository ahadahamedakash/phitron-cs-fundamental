#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    for (int i = 0; i < q; ++i)
    {
        int key, l = 0, r = n - 1, ans = n, mid;
        cin >> key;

        while (l <= r)
        {
            mid = l + (r - l) / 2;

            if (key <= v[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans + 1 << nl;
    }

    return 0;
}
