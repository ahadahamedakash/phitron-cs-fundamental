#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int parent[1005];

int find(int node)
{
    if (parent[node] == -1)
        return node;

    int leader = find(parent[node]);
    parent[node] = leader; // this line will make this o(n) to log n
    return leader;
}

int main()
{
    fastIO();

    memset(parent, -1, sizeof(parent));
    parent[0] = 1;
    parent[1] = -1;
    parent[2] = 1;
    parent[3] = 1;
    parent[4] = 5;
    parent[5] = 3;

    cout << find(4) << nl;

    for (int i = 0; i < 6; i++)
        cout << i << " -> " << parent[i] << nl;

    return 0;
}
