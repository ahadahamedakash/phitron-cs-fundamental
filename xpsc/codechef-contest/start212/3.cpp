#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            int lt = 0, rt = 0;

            for (int j = 0; j < i; ++j)
                if (v[j] < v[i])
                    lt++;

            for (int j = i + 1; j < n; ++j)
                if (v[j] < v[i])
                    rt++;

            ans += min(lt, rt);
        }

        cout << ans << nl;
    }

    return 0;
}
