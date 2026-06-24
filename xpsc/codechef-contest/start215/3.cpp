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

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, c;
        cin >> n >> c;

        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        string s;
        cin >> s;

        int normalMission = 0, specialMission = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
                specialMission += v[i];
            else
                normalMission += v[i];
        }

        int ans = normalMission;

        if (normalMission >= c)
            ans = max(ans, normalMission + specialMission - c);

        cout << ans << nl;
    }

    return 0;
}
