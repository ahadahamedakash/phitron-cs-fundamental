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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        int mnSum = INT_MAX;
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int cost;
                if (j == i + 1)
                    cost = v[i] + v[j] / 2;
                else
                    cost = v[i] + v[j];

                mnSum = min(mnSum, cost);
            }
        }

        cout << mnSum << nl;
    }

    return 0;
}
