#include <bits/stdc++.h>

using namespace std;

class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printAdjList()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " : ";
            for (int neighbor : l[i])
            {
                cout << neighbor << " ";
            }

            cout << endl;
        }
    }

    void bfs() // TC: O(V+E)
    {
        queue<int> Q;
        vector<bool> visited(V, false);

        Q.push(0);
        visited[0] = true;

        while (Q.size() > 0)
        {
            int u = Q.front();
            Q.pop();

            cout << u << " ";

            for (int v : l[u])
            {
                if (!visited[v])
                {
                    visited[v] = true;
                    Q.push(v);
                }
            }
        }

        cout << endl;
    }

    void dfsHelper(int u, vector<bool> &visited)
    {
        cout << u << " ";
        visited[u] = true;
        for (int v : l[u])
        {
            if (!visited[v])
            {
                dfsHelper(v, visited);
            }
        }
    }

    void dfs()
    {
        int src = 0;
        vector<bool> visited(V, false);
        dfsHelper(src, visited);
    }
};

int main()
{
    Graph g(6);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    // g.addEdge(2, 3);
    g.addEdge(2, 4);

    // g.printAdjList();
    cout << "BFS: ";
    g.bfs();

    cout << endl
         << "DFS: ";
    g.dfs();

    return 0;
}
