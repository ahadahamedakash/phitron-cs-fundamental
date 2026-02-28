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

int dist[1005];

int main()
{
    fastIO();

    int n, e;
    cin >> n >> e;
    vector<Edge> edge_list;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        edge_list.push_back(Edge(a, b, c)); // DIRECTED GRAPH
        // edge_list.push_back(Edge(b, a, c)); // UNDIRECTED GRAPH
    }

    // for (auto edge : edge_list)
    //     cout << edge.a << " " << edge.b << " " << edge.c << endl;

    for (int i = 0; i < n; i++)
        dist[i] = INT_MAX;

    dist[0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;

            if (dist[a] != INT_MAX && dist[a] + c < dist[b])
                dist[b] = dist[a] + c;
        }
    }

    for (int i = 0; i < n; i++)
        cout << i << " -> " << dist[i] << nl;

    return 0;
}

/*
INPUT
    4 4
    0 2 5
    0 3 12
    2 1 2
    1 3 3
*/
