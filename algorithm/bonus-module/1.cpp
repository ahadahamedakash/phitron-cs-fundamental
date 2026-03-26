#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int val[1005];

bool subset_sum(int i, int sum) // O(2^n)
{
    if (i < 0)
    {
        if (sum == 0)
            return true;
        else
            return false;
    }

    if (val[i] <= sum)
    {
        bool op1 = subset_sum(i - 1, sum - val[i]);
        bool op2 = subset_sum(i - 1, sum);

        return op1 || op2;
    }
    else
    {
        return subset_sum(i - 1, sum);
    }
}

int main()
{
    fastIO();

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> val[i];

    int sum;
    cin >> sum;

    subset_sum(n - 1, sum) ? cout << "YES" : cout << "NO";

    return 0;
}
