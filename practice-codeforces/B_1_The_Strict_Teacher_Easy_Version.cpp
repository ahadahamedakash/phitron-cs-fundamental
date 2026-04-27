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
        int t1, t2;
        cin >> t1 >> t2;

        int lt = min(t1, t2);
        int rt = max(t1, t2);

        while (q--)
        {
            int d;
            cin >> d;

            if (d < lt)
                cout << lt - 1 << nl;
            else if (d > rt)
                cout << n - rt << nl;
            else
                cout << (rt - lt) / 2 << nl;
        }
    }

    return 0;
}
