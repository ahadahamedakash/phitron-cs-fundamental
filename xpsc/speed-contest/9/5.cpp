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

        if (n == 1 || n == 2)
        {
            cout << -1 << nl;
            continue;
        }
        else
        {
            for (int val : v)
            {
                if (val == 1)
                    cout << 3 << " ";
                else if (val == 3)
                    cout << 1 << " ";
                else
                    cout << val << " ";
            }

            cout << nl;
        }
    }

    return 0;
}
