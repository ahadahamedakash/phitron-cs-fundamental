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
        multiset<int> ms;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ms.insert(x);
        }

        int heightCount = 1;
        int width = m;

        while (!ms.empty())
        {
            auto it = ms.upper_bound(width);

            if (it != ms.begin())
            {
                it--;
                width -= *it;
                ms.erase(it);
            }
            else
            {
                heightCount++;
                width = m;
            }
        }

        cout << heightCount << nl;
    }

    return 0;
}
