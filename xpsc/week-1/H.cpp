#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() // O(n log n)
{
    fastIO();

    int n;
    cin >> n;

    vector<int> v(n - 1);

    for (int i = 0; i < n - 1; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] != i + 1)
        {
            cout << i + 1 << nl;
            return 0;
        }
    }

    cout << n << nl;
}

/*
OPTIMIZED: O(n) version
    {
        ll n;
        cin >> n;

        ll total = n * (n + 1) / 2;
        ll sum = 0, x;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> x;
            sum += x;
        }

        cout << total - sum << '\n';

        return 0;
    }
*/
