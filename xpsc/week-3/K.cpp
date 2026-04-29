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
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        while (q--)
        {
            int d;
            cin >> d;

            int rt = lower_bound(v.begin(), v.end(), d) - v.begin();
            int lt = rt - 1;

            if (rt == m)
            {
                cout << (n - d) + (d - v[lt]) << nl;
            }
            else if (lt == -1)
            {
                cout << d - 1 + (v[rt] - d) << nl;
            }
            else
            {
                int disLt = d - v[lt], disRt = v[rt] - d;
                cout << abs(disLt - disRt) / 2 + min(disLt, disRt) << nl;
            }
        }
    }

    return 0;
}
