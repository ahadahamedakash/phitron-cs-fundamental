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
        for (int i = 0; i < n; i++)
            cin >> v[i];

        /*
        set<int> st;

        int ans = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            auto it = st.find(v[i]);

            if (it == st.end())
            {
                st.insert(v[i]);
            }
            else
            {
                ans = i + 1;
                break;
            }
        }

        cout << ans << nl;
        */

        vector<int> vis(n + 1, 0);
        int ans = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (vis[v[i]] == 0)
            {
                vis[v[i]] = 1;
            }
            else
            {
                ans = i + 1;
                break;
            }
        }

        cout << ans << nl;
    }

    return 0;
}

/*
Summary:
We first used a set to track visited elements while scanning from right to left, giving a time complexity of O(n log n) and space complexity of O(n).
Since the constraint 1 ≤ a[i] ≤ n allows direct indexing, we can replace the set with a vector<bool> or array, reducing the solution to O(n) time with O(n) space.
*/
