#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int r = n * 3;

        for (int i = 0; i < n; i++)
        {
            v.push_back(i + 1);
            v.push_back(r - 1);
            v.push_back(r);
            r -= 2;
        }

        for (auto i : v)
            cout << i << " ";

        cout << nl;
    }

    return 0;
}
