#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << endl;

    for (int i = 2; i < n; i++)
    {
        cout << i;
        int spaces = n - 2;
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        cout << n + 1 - i;
        cout << endl;
    }

    for (int i = n; i > 0; i--)
    {
        cout << i;
    }

    return 0;
}
