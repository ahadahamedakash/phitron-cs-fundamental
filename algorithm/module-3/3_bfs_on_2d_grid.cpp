#include <bits/stdc++.h>

using namespace std;

int n, m;
char grid[105][105];
bool visited[105][105];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        int parent_i = parent.first;
        int parent_j = parent.second;

        cout << parent_i << " " << parent_j << endl;

        for (int i = 0; i < 4; i++)
        {
            int ci = parent_i + d[i].first;
            int cj = parent_j + d[i].second;

            if (valid(ci, cj) && !visited[ci][cj])
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
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

    int si, sj;
    cin >> si >> sj;

    memset(visited, false, sizeof(visited));
    bfs(si, sj);

    return 0;
}

/*
INPUT:
    3 4
    ....
    ....
    ....
    1 2
*/
