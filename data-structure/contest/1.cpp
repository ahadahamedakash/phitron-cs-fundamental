#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long arr[n];

    long long maxEven = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            maxEven = max(maxEven, arr[i]);
    }

    if (maxEven <= 0)
        cout << -1;
    else
        cout << maxEven;

    return 0;
}
