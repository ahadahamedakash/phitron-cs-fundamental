#include <bits/stdc++.h>

using namespace std;

int main()
{
    // list<int> l;
    list<int> l(5, 1);
    list<int> l2(l); // copy previous list on new list -> O(N)

    int arr[] = {10, 20, 30};
    list<int> l3(arr, arr + 3);

    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for (int val : l3)
    {
        cout << val << " ";
    }

    cout << endl;

    // cout << *l.begin() << endl;

    // cout << l.size() << endl;

    return 0;
}
