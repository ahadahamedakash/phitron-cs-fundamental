#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;

    list<int> l;

    while (x--)
    {
        int idx, val;

        cin >> idx >> val;

        if (idx < 0 || idx > (int)l.size())
        {
            cout << "Invalid" << endl;
            continue;
        }
        else
        {
            l.insert(next(l.begin(), idx), val);
        }

        cout << "L -> ";

        for (auto it = l.begin(); it != l.end(); it++)
        {
            cout << *it << " ";
        }

        cout << endl
             << "R -> ";

        for (auto it = l.rbegin(); it != l.rend(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;
    }

    return 0;
}
