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
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        for (int i = 0; i < m; i++)
        {
            int l, r;
            cin >> l >> r;
            if ((mp.find(l) == mp.end()) || (mp.find(r) == mp.end()))
            {
                cout << "NO" << nl;
            }
            else
            {
                int sStationLMI, eStationRMI;
                sStationLMI = *mp[l].begin();
                eStationRMI = *mp[r].rbegin();
                if (sStationLMI < eStationRMI)
                {
                    cout << "YES" << nl;
                }
                else
                {
                    cout << "NO" << nl;
                }
            }
        }
    }

    return 0;
}
