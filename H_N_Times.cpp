#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        char c;
        cin >> c;

        for (int i = 0; i < x; i++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
