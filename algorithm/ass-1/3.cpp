#include <bits/stdc++.h>

using namespace std;

char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void dfs(int si, int sj)
{
    visited[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !visited[ci][cj] && grid[ci][cj] != '#')
            dfs(ci, cj);
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int si = -1, sj = -1, ei = -1, ej = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'B')
            {
                ei = i;
                ej = j;
            }
        }
    }

    memset(visited, false, sizeof(visited));
    if (si == -1 && sj == -1)
    {
        cout << "NO" << endl;
        return 0;
    }
    dfs(si, sj);

    if (visited[ei][ej] == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

/*
INPUT
    5 8
    ########
    #.A#...#
    #.##.#B#
    #......#
    ########
*/
