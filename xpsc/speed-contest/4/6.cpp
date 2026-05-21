#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        int l = -1, r = -1;
        for (int i = 0; i + 1 < n; ++i)
        {
            if (v[i] > v[i + 1])
            {
                l = i;
                r = i + 1;
                break;
            }
        }

        if (l == -1 && r == -1)
            cout << "-1" << nl;
        else
            cout << l + 1 << " " << r + 1 << nl;
    }

    return 0;
}
