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
        string a, b;
        cin >> n >> a >> b;

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (i == 0 || a[i - 1] == b[i - 1])
                {
                    cnt++;
                }
            }
        }

        cout << cnt << nl;
    }

    return 0;
}
