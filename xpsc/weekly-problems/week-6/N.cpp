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
        vector<int> a(n), b(n), c;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(all(b));
        if (a == b)
        {
            cout << "NO" << nl;
            continue;
        }

        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i])
                c.push_back(a[i]);
        }

        cout << "YES" << nl;
        cout << c.size() << nl;
        for (int val : c)
            cout << val << " ";

        cout << nl;
    }

    return 0;
}
