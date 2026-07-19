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

        vector<int> a(n), b(n);
        for (int &i : a)
            cin >> i;
        for (int &j : b)
            cin >> j;

        int x10, x01, x11, x00;
        x10 = x01 = x11 = x00 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i])
            {
                if (a[i] == 1)
                    x10++;
                else
                    x01++;
            }
            else
            {
                if (a[i])
                    x11++;
                else
                    x00++;
            }
        }

        if (!x01 && !x10)
            cout << 0 << nl;
        else if (x10 % 2)
            cout << 1 << nl;
        else if (x10 > 0)
            cout << 2 << nl;
        else if (x00 && x11)
            cout << 2 << nl;
        else
            cout << -1 << nl;
    }

    return 0;
}
