#include <bits/stdc++.h>

using namespace std;

int n, m;
char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> d = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};

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

        if (valid(ci, cj) == true && !visited[ci][cj] && grid[ci][cj] != '-')
            dfs(ci, cj);
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int si, sj;
    int di, dj;
    cin >> si >> sj;
    cin >> di >> dj;

    if (!valid(di, dj) || !valid(si, sj) || grid[si][sj] == '-' || grid[di][dj] == '-')
    {
        cout << "NO";
        return 0;
    }

    memset(visited, false, sizeof(visited));

    dfs(si, sj);

    if (visited[di][dj] == true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
