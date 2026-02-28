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

        edge_list.push_back(Edge(a, b, c));
    }

    for (int i = 0; i < n; i++)
        dist[i] = INT_MAX;

    dist[0] = 0;
    bool hasCycle = false;

    for (auto ed : edge_list)
    {
        int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;

        if (dist[a] != INT_MAX && dist[a] + c < dist[b])
        {
            hasCycle = true;
            break;
        }
    }

    if (hasCycle)

        cout << "Negative weighted cycle detected!";
    else
    {
        for (int i = 0; i < n; i++)
            cout << i << " -> " << dist[i] << nl;
    }

    return 0;
}

/*
INPUT
    4 4
    0 1 5
    1 2 3
    2 3 2
    3 1 -6
*/
