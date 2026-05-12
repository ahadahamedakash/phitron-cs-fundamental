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

        for (int i = 0; i < n; ++i)
        {
            if (v[i] % 2 == 0)
                cout << v[i] << " ";
        }

        for (int i = 0; i < n; ++i)
        {
            if (v[i] % 2 != 0)
                cout << v[i] << " ";
        }
        cout << nl;
    }

    return 0;
}
