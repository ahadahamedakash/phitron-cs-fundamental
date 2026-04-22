#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n;
    cin >> n;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        auto it = ms.lower_bound(i);
        if (it != ms.end())
        {
            cnt++;
            ms.erase(it);
        }
    }

    cout << cnt << nl;

    return 0;
}
