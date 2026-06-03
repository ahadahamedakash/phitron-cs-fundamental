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
        int n, x, k;
        cin >> n >> x >> k;

        int ans = 1e9;
        for (int finalStu = 0; finalStu <= n; ++finalStu)
            if (finalStu % k == 0)
                ans = min(ans, abs(finalStu - x));

        cout << ans << nl;
    }

    return 0;
}

/*
    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;

        if (x % k == 0)
            cout << 0 << nl;
        else
        {

            int convinceToNotGo = x % k;

            int upperLimit = ((x / k) + 1) * k;

            if (upperLimit <= n)
            {
                int convinceTOGo = upperLimit - x;
                cout << min(convinceToNotGo, convinceTOGo) << nl;
            }
            else
            {
                cout << convinceToNotGo << nl;
            }
        }
    }
*/
