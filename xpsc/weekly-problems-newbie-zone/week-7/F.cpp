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
        int x;
        cin >> x;

        int msb = 1;
        while ((msb << 1) <= x)
            msb <<= 1;

        int a = x ^ msb;

        cout << a << " " << msb << nl;
    }

    return 0;
}

/*

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int a, b, mnDif = INT_MAX;

        for (int i = 0; i <= x; ++i)
        {
            int xr = x ^ i; // xr = a, i = b

            if (xr <= i && i <= x)
            {
                int dif = i - xr;

                if (dif < mnDif)
                {
                    a = xr;
                    b = i;
                }
            }
        }
        cout << a << " " << b << nl;
    }

    return 0;
}
*/
