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
        vector<int> ans(n, 0);

        for (int &i : v)
            cin >> i;

        int attack = 0;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] <= attack)
            {
                ans[i] = v[i];
            }
            else
            {
                ans[i] = attack;
                attack++;
            }
        }

        for (int val : ans)
            cout << val << " ";
        cout << nl;
    }

    return 0;
}

/*
    https://www.codechef.com/problems/BOP3E
*/
