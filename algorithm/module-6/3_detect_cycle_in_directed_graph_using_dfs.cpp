#include <bits/stdc++.h>

using namespace std;

bool cycle;
bool visited[105];
vector<int> adj_list[105];
bool pathVisite[105];

void dfs(int src)
{
    visited[src] = true;
    pathVisite[src] = true;

    for (int child : adj_list[src])
    {
        if (visited[child] && pathVisite[child])
            cycle = true;

        if (!visited[child])
            dfs(child);
    }

    pathVisite[src] = false;
}

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

    memset(visited, false, sizeof(visited));
    memset(pathVisite, false, sizeof(pathVisite));

    cycle = false;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            dfs(i);
    }

    if (cycle)
        cout << "Cycle detected\n";
    else
        cout << "No cycle\n";

    return 0;
}

/*
INPUT:
    4 4
    0 1
    1 2
    2 3
    0 3
*/
