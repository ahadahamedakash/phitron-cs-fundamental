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
    }

    int t;
    cin >> t;

    while (t--)
    {
        int src, dest;

        cin >> src >> dest;

        if (src == dest)
        {
            cout << "YES" << endl;
            continue;
        }

        bool found = false;

        for (int child : adj_list[src])
        {
            if (child == dest)
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
