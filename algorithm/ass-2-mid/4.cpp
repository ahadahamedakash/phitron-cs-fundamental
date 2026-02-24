#include <bits/stdc++.h>

using namespace std;

char grid[1005][1005];
bool visited[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, m;

bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj, int ei, int ej)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        if (par_i == ei && par_j == ej)
            return;

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;

            if (isValid(ci, cj) && !visited[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                visited[ci][cj] = true;

                parent[ci][cj] = {par_i, par_j};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(visited, false, sizeof(visited));

    int si = -1, sj = -1, ei = -1, ej = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'D')
            {
                ei = i;
                ej = j;
            }
        }
    }

    bfs(si, sj, ei, ej);

    if (visited[ei][ej])
    {
        int ci = ei;
        int cj = ej;

        while (!(ci == si && cj == sj))
        {
            if (grid[ci][cj] != 'D')
                grid[ci][cj] = 'X';

            pair<int, int> p = parent[ci][cj];
            ci = p.first;
            cj = p.second;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << grid[i][j];
        cout << endl;
    }

    return 0;
}
