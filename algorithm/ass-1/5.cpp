#include <bits/stdc++.h>

using namespace std;

char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
int room_count = 0;
vector<int> rooms;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void dfs(int si, int sj)
{
    room_count++;
    visited[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !visited[ci][cj] && grid[ci][cj] == '.')
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
                room_count = 0;
                dfs(i, j);
                rooms.push_back(room_count);
            }
        }
    }

    sort(rooms.rbegin(), rooms.rend());

    if (rooms.empty())
    {
        cout << 0;
        return 0;
    }

    while (!rooms.empty())
    {
        int r = rooms.back();
        cout << r << " ";
        rooms.pop_back();
    }

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
