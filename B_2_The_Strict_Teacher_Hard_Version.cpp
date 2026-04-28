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

        while (q--)
        {
            int d;
            cin >> d;

            if (v.size() == 1)
            {
                if (d > v[0])
                    cout << v[0] - 1 << nl;
                else
                    cout << n - v[0] << nl;
            }
            else if (v.size() == 2)
            {
                int lt = min(v[0], v[1]);
                int rt = max(v[0], v[1]);

                if (d < lt)
                    cout << lt - 1 << nl;
                else if (d > rt)
                    cout << n - rt << nl;
                else
                    cout << (rt - lt) / 2 << nl;
            }
            else
            {
                auto lb = lower_bound(v.begin(), v.end(), d);
                auto rb = upper_bound(v.begin(), v.end(), d);

                int lt = min(*lb, *rb);
                int rt = max(*lb, *rb);

                if (d < lt)
                    cout << lt - 1 << nl;
                else if (d > rt)
                    cout << n - rt << nl;
                else
                    cout << (rt - lt) / 2 << nl;
            }
        }
    }

    return 0;
}
