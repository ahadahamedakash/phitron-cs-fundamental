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

    int n, e;
    cin >> n >> e;

    bool hasCycle = false;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA == leaderB)
            hasCycle = true;
        else
            dsu_union(a, b);
    }

    if (hasCycle)
        cout << "Cycle detected";
    else
        cout << "No cycle detected";

    return 0;
}

/*
INPUT:
    6 6
    0 1
    1 2
    0 4
    4 5
    5 3
    3 4
*/
