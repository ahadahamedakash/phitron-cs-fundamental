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

        int candy = 0;
        for (int val : v)
        {
            if (val % x == 0)
            {
                candy = val;
                break;
            }
        }

        cout << candy << nl;
    }

    return 0;
}
