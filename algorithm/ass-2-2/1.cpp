#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

ll dist[1005];

int main()
{
    fastIO();

    int n, e;
    cin >> n >> e;
    vector<Edge> edge_list;

    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    int src;
    cin >> src;

    int t;
    cin >> t;
    // int q[t];
    vector<int> q(t);
    for (int i = 0; i < t; i++)
        cin >> q[i];

    for (int i = 1; i <= n; i++)
        dist[i] = LLONG_MAX;

    dist[src] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a = ed.a, b = ed.b, c = ed.c;
            if (dist[a] != LLONG_MAX && dist[a] + c < dist[b])
            {
                dist[b] = dist[a] + c;
            }
        }
    }

    bool cycle = false;
    for (auto ed : edge_list)
    {
        int a = ed.a, b = ed.b, c = ed.c;
        if (dist[a] != LLONG_MAX && dist[a] + c < dist[b])
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
    {
        cout << "Negative Cycle Detected" << nl;
        return 0;
    }

    for (int i = 0; i < t; i++)
    {
        int dest = q[i];
        if (dist[dest] == LLONG_MAX)
            cout << "Not Possible" << nl;
        else
            cout << dist[dest] << nl;
    }

    return 0;
}
