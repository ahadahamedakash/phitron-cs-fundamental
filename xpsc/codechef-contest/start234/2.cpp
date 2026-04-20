#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int m, n;
        cin >> m >> n;

        ll totalMinute = 0;

        for (int i = m; i > n; i--)
            totalMinute += i;

        cout << totalMinute << nl;
    }

    return 0;
}
