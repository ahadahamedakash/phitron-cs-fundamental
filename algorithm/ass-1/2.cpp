#include <bits/stdc++.h>

using namespace std;

vector<int> adj_list[100005];

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        if (x > n || x < 0 || adj_list[x].empty())
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> temp = adj_list[x];
        sort(temp.rbegin(), temp.rend());

        for (int val : temp)
        {
            cout << val << " ";
        }

        cout << endl;
    }

    return 0;
}
