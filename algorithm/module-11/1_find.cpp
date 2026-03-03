#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int parent[1005];

int find(int node)
{
    while (parent[node] != -1)
    {
        // cout << node << nl;
        node = parent[node];
    }

    return node;
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

    return 0;
}
