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

    vector<int> v(m + 1, -1);
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        v[a] = max(v[a], b);
    }

    for (int i = 1; i <= m; ++i)
        cout << v[i] << spc;

    cout << nl;

    return 0;
}
