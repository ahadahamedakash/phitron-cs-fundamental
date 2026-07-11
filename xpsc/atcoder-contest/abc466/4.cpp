#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define llmx LLONG_MAX
#define llmn LLONG_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n, m;
    cin >> n >> m;

    vector<int> row(n + 1, -1), col(n + 1, -1);
    ll ans = 0;

    for (int i = 0; i < m; ++i)
    {
        int r, c;
        cin >> r >> c;

        if (row[r] != -1)
        {
            ans--;
            int oldCol = row[r];

            row[r] = -1;
            col[oldCol] = -1;
        }

        if (col[c] != -1)
        {
            ans--;
            int oldRow = col[c];

            col[c] = -1;
            row[oldRow] = -1;
        }

        row[r] = c;
        col[c] = r;
        ans++;
    }

    cout << ans << nl;

    return 0;
}
