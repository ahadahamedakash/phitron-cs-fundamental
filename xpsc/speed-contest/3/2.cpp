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
        for (int &i : v)
            cin >> i;

        sort(v.rbegin(), v.rend());
        int total = 0;

        for (int i = 0; i < k; ++i)
            total += v[i];

        cout << total << nl;
    }

    return 0;
}
