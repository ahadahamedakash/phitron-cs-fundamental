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
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        for (int &i : a)
            cin >> i;
        for (int &j : b)
            cin >> j;

        sort(all(b));
        int cnt = 0;

        for (int x : a)
            cnt += upper_bound(b.begin(), b.end(), x - 1) - b.begin();

        cout << cnt << nl;
    }

    return 0;
}
