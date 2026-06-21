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
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll totalCost = 0;

        for (int i = 1; i <= n; ++i)
        {
            int a;
            cin >> a;
            totalCost += 1LL * a * i;
        }

        cout << totalCost << nl;
    }

    return 0;
}
