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
        int zeroCnt = 0;
        vector<int> v(n);
        for (int &i : v)
        {
            cin >> i;
            if (i == 0)
                zeroCnt++;
        }

        if (n == zeroCnt)
        {
            cout << -1 << nl;
            continue;
        }
        cout << "HAs answer" << nl;
    }

    return 0;
}
