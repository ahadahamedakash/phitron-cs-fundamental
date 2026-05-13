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
        vector<int> v(n);

        int cnt1 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
            {
                cnt1++;
            }
        }

        if (cnt1 >= 2)
        {
            cout << (((cnt1 + 1) / 2) + (n - cnt1)) << nl; // +1 added because gave a wrong case for 1 1 1
            continue;
        }

        cout << n << nl;
    }

    return 0;
}

/*
INPUT:
    1
    3
    1 1 1
*/
