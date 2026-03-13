#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int val[1005], weight[1005];

int knapsack(int i, int max_wight)
{
    if (i < 0 || max_wight <= 0)
        return 0;

    if (weight[i] <= max_wight)
    {
        int op1 = knapsack(i - 1, max_wight - weight[i]) + val[i];
        int op2 = knapsack(i - 1, max_wight);

        return max(op1, op2);
    }
    else
    {
        return knapsack(i - 1, max_wight);
    }
}

int main()
{
    fastIO();

    int n, max_wight;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> val[i];

    for (int i = 0; i < n; i++)
        cin >> weight[i];

    cin >> max_wight;

    cout << knapsack(n - 1, max_wight);

    return 0;
}

/*
INPUT:
    4
    10 4 7 5
    4 3 2 5
    8
*/
