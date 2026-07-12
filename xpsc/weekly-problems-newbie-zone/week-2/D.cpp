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
    map<string, string> ans, has;
    for (int i = 1; i <= n; i++)
    {
        string a, b;
        cin >> a >> b;

        if (has.find(a) != has.end())
        {
            string oldName = has[a];
            ans[oldName] = b;
            has.erase(a);
            has[b] = oldName;
        }
        else
        {
            ans[a] = b;
            has[b] = a;
        }
    }

    cout << ans.size() << nl;

    for (auto [x, y] : ans)
    {
        cout << x << " " << y << nl;
    }

    return 0;
}
