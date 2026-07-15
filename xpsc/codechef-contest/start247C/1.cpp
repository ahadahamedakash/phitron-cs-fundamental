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

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        int o1, o2;
        o1 = o2 = 0;

        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                if (v[i] % 2 == 0)
                    o1++;
            }
            else
            {
                if (v[i] % 2 == 1)
                    o1++;
            }

            if (i % 2 == 0)
            {
                if (v[i] % 2 == 1)
                    o2++;
            }
            else
            {
                if (v[i] % 2 == 0)
                    o2++;
            }
        }

        cout << min(o1, o2) << nl;
    }

    return 0;
}
