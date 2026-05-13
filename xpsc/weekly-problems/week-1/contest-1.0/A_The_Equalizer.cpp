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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int totalMoves = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            totalMoves += v[i];
        }

        if (totalMoves % 2 == 1)
            cout << "YES" << nl;
        else if ((n * k) % 2 == 0)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
