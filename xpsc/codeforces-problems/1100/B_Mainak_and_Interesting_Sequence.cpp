#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        if (n > s)
        {
            no;
            continue;
        }

        vector<int> ans(n, 1);
        if (n % 2 == 1)
        {
            int rem = s - n;
            ans.back() += rem;
        }
        else
        {
            if (s % 2 == 0)
            {
                int rem = s - n;
                ans[0] += rem / 2;
                ans[1] += rem / 2;
            }
            else
            {
                no;
                continue;
            }
        }

        yes;
        for (int val : ans)
            cout << val << " ";
        cout << nl;
    }

    return 0;
}

/*
    LINK: https://codeforces.com/problemset/problem/1726/B
*/
