
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
        vector<ll> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        for (int i = 0; i < n - 1; ++i)
        {
            if (v[i] > v[i + 1])
            {
                int total = v[i] + v[i + 1];
                int half = total / 2;
                v[i] = half;
                v[i + 1] = total - half;

                i++;
            }
        }

        bool sorted = true;

        for (int i = 1; i < n; ++i)
            if (v[i - 1] > v[i])
                sorted = false;

        cout << (sorted ? "Yes" : "No") << nl;
    }

    return 0;
}
