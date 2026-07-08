#include <bits/stdc++.h>
#define nl '\n'
#define all(x) x.begin(), x.end()
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int n;
    cin >> n;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        auto lb = lower_bound(all(v), x);
        auto ub = upper_bound(all(v), x);

        if (lb == v.begin())
            cout << "X ";
        else
        {
            --lb;
            cout << *lb << ' ';
        }

        if (ub == v.end())
            cout << "X";
        else
            cout << *ub;

        cout << nl;
    }

    return 0;
}
