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
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        map<int, int> mp;
        mp[0] = -1;

        int sum = 0;
        int length = -1;

        for (int i = 0; i < n; ++i)
        {
            sum += v[i];
            if (mp.count(sum - s))
                length = max(length, i - mp[sum - s]);

            if (!mp.count(sum))
                mp[sum] = i;
        }

        if (length == -1)
            cout << -1 << nl;
        else
            cout << n - length << nl;
    }

    return 0;
}
