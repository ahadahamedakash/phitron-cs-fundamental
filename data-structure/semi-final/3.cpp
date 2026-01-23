#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    list<long long> l;

    for (int i = 0; i < n; i++)
    {
        long long val;
        cin >> val;
        l.push_back(val);
    }

    l.sort();

    for (int i = 1; i <= k; i++)
    {
        if (i == k)
        {
            cout << l.front();
            break;
        }

        l.pop_front();
    }

    return 0;
}
