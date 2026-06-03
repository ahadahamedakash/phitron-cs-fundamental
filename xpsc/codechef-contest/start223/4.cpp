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

        int len = 0, curr = 0;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] <= curr)
                len++;
            else if (v[i] == curr + 1)
            {
                curr++, len++;
            }
        }

        // int need = 1, len = 0;
        // for (int val : v)
        // {
        //     if (need == 1 and val == need)
        //     {
        //         len++;
        //         need = 1;
        //     }
        //     else if (val == need + 1)
        //     {
        //         len++, need++;
        //     }
        // }

        cout << len << nl;
    }

    return 0;
}
