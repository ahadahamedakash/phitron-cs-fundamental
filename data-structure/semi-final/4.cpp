#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        arr[i] = val;
    }

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int count = 0;

        int left = max(2, x);
        int right = min(n - 1, y);

        for (int i = left; i <= right; i++)
        {
            if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
