#include <bits/stdc++.h>
#define nl '\n'
#define spc ' '
#define imx INT_MAX
#define imn INT_MIN
#define ld long double
#define ll long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n, m;
    cin >> n;

    vector<int> worms(n);
    for (int &i : worms)
        cin >> i;

    int sum = 0;
    vector<int> prefSum;
    for (int i = 0; i < n; ++i)
    {
        sum += worms[i];
        prefSum.push_back(sum);
    }

    cin >> m;

    vector<int> jWorms(m);
    for (int &i : jWorms)
        cin >> i;

    for (int val : jWorms)
    {
        int ans = lower_bound(prefSum.begin(), prefSum.end(), val) - prefSum.begin();

        cout << ans + 1 << nl;
    }

    return 0;
}
