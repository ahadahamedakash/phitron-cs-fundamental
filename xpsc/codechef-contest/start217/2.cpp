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

        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum >= 0)
            cout << 0 << nl;
        else
            cout << (-sum + n - 1) << nl;
    }

    return 0;
}
