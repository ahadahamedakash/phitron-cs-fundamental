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

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int lt = 0, rt = 0;
            for (int j = 0; j < i; j++)
            {
                if (v[j] < v[i])
                    lt++;
            }

            for (int j = i + 1; j < n; j++)
            {
                if (v[j] > v[i])
                    rt++;
            }

            if (lt == rt)
                ans++;
        }

        cout << ans << nl;
    }

    return 0;
}
