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
        for (int &i : v)
            cin >> i;

        sort(all(v));

        int jolt = 0;

        for (int i = 0; i < n; ++i)
        {
            if (i == 0)
            {
                jolt++;
            }
            else
            {
                if (v[i] != v[i - 1])
                    jolt++;
            }
        }

        cout << jolt << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/BOP2
*/
