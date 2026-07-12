#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }

    if (x == 0)
    {
        if (s.count(0))
            cout << 1 << nl;
        else
            cout << 0 << nl;
        return 0;
    }

    int missing = 0;
    for (int i = 0; i < x; i++)
    {
        if (!s.count(i))
            missing++;
    }

    int shouldRemove = s.count(x) ? 1 : 0;

    cout << missing + shouldRemove << nl;

    return 0;
}
