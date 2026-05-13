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

        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            v[i].first = x;
            v[i].second = i + 1;
        }

        sort(v.rbegin(), v.rend());

        if (v[0].first == 0)
        {
            cout << -1 << nl;
            continue;
        }

        cout << v[0].second << " " << v[1].second << " " << v[2].second << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/NOTSUM
*/
