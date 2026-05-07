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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);

        for (int &i : v)
            cin >> i;

        sort(v.rbegin(), v.rend());

        int sum = 0;
        bool isPossible = true;

        for (int i = 0; i < n; ++i)
        {
            if (sum + v[i] == x)
            {
                if (i == n - 1)
                {
                    isPossible = false;
                    break;
                }

                swap(v[i], v[i + 1]);
            }

            sum += v[i];
        }

        if (!isPossible)
            cout << "NO" << nl;
        else
        {
            cout << "YES" << nl;
            for (int val : v)
                cout << val << " ";

            cout << nl;
        }
    }

    return 0;
}
