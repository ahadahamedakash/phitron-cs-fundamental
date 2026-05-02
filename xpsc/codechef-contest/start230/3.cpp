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
        int n, k;
        cin >> n >> k;
        int profit = 0;
        vector<int> v(n);
        for (int &i : v)
            cin >> i;

        sort(v.rbegin(), v.rend());

        for (int i = 0; i < n; i++)
        {
            if (i < k)
            {
                if (v[i] - 5 > 0)
                    profit += (v[i] - 5);
            }
            else
            {
                if (v[i] - 10 > 0)
                    profit += (v[i] - 10);
            }
        }

        cout << profit << nl;
    }

    return 0;
}

/*
    LINK: https://www.codechef.com/problems/RESELL
*/
