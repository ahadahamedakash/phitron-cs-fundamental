#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int totalRoom = 0;

        for (int i = 0; i < n; i++)
        {

            int room = ceil((double)a[i] / 2);
            totalRoom += room;
        }

        cout << totalRoom << endl;
    }

    return 0;
}
