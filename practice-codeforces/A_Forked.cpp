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

    int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

    while (t--)
    {
        ll a, b, kx, ky, qx, qy;
        cin >> a >> b >> kx >> ky >> qx >> qy;

        set<pair<int, int>> kPos, qPos;

        for (int i = 0; i < 4; i++)
        {
            kPos.insert({kx + dx[i] * a, ky + dy[i] * b});
            kPos.insert({kx + dx[i] * b, ky + dy[i] * a});

            qPos.insert({qx + dx[i] * a, qy + dy[i] * b});
            qPos.insert({qx + dx[i] * b, qy + dy[i] * a});
        }

        int ans = 0;
        for (auto position : kPos)
        {
            if (qPos.find(position) != qPos.end())
            {
                ans++;
            }
        }

        cout << ans << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1904/A
*/
