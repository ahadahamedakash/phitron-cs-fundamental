#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int parent[1005];
int groupSize[1005];

int find(int node)
{
    if (parent[node] == -1)
        return node;

    int leader = find(parent[node]);
    parent[node] = leader; // this line will make this o(n) to log n
    return leader;
}

void dsu_union(int nodeOne, int nodeTwo)
{
    int leaderOne = find(nodeOne);
    int leaderTwo = find(nodeTwo);

    if (groupSize[leaderOne] > groupSize[leaderTwo])
    {
        parent[leaderTwo] = leaderOne;
        groupSize[leaderOne] += groupSize[leaderTwo];
    }
    else
    {
        parent[leaderOne] = leaderTwo;
        groupSize[leaderTwo] += groupSize[leaderOne];
    }
}

int main()
{
    fastIO();

    memset(parent, -1, sizeof(parent));
    memset(groupSize, 1, sizeof(groupSize));

    dsu_union(1, 2);
    dsu_union(2, 0);
    dsu_union(3, 1);

    for (int i = 0; i < 6; i++)
        cout << i << " -> " << parent[i] << nl;

    return 0;
}
