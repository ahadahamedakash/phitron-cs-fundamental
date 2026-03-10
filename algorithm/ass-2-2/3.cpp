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
    parent[node] = leader;
    return leader;
}

void dsuUnion(int n1, int n2)
{
    int l1 = find(n1);
    int l2 = find(n2);

    if (groupSize[l1] > groupSize[l2])
    {
        parent[l2] = l1;
        groupSize[l1] += groupSize[l2];
    }
    else
    {
        parent[l1] = l2;
        groupSize[l2] += groupSize[l1];
    }
}

int main()
{
    fastIO();

    memset(parent, -1, sizeof(parent));
    for (int i = 0; i < 1005; i++)
        groupSize[i] = 1;

    int n, e;
    cin >> n >> e;

    int cycleCount = 0;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int lA = find(a);
        int lB = find(b);

        if (lA == lB)
            cycleCount++;
        else
            dsuUnion(a, b);
    }

    cout << cycleCount << nl;

    return 0;
}
