#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        int totalOr = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            totalOr |= v[i];
        }

        int cur = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cur |= v[i];

            if (cur == totalOr)
            {
                cnt++;
                cur = 0;
            }
        }

        cout << n - cnt << nl;
    }

    return 0;
}