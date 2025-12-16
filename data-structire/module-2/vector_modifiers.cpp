#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2;

    vector<int> v3 = {100, 200, 300};

    v2 = v;

    v.insert(v.begin() + 2, v3.begin(), v3.end());

    replace(v.begin(), v.end(), 2, 100);

    // vector<int>:: iterator it = find(v.begin(), v.end(), 100);
    auto it = find(v.begin(), v.end(), 100);

    if (it == v.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    // v.erase(v.begin() + 2);                // erase specific item
    // v.erase(v.begin() + 1, v.begin() + 5); // erase multiple values

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    v2.pop_back(); // remove last element
    v2.insert(v2.begin() + 3, 99);

    for (int x : v2)
    {
        cout << x << " ";
    }

    return 0;
}