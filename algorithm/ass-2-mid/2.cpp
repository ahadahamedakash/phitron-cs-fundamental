#include <bits/stdc++.h>

using namespace std;

int n, m;
char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> d = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};
int temp = 0;
int elements = INT_MAX;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void dfs(int si, int sj = 0)
{
    temp++;
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

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j] == '.')
            {
                temp = 0;
                dfs(i, j);
                elements = min(temp, elements);
            }
        }
    }

    if (elements == INT_MAX)
        cout << -1;
    else
        cout << elements;

    return 0;
}
