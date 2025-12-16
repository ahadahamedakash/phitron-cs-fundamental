#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> v2(5, -1);
    vector<int> v3(v2); // copy a vector

    int a[5] = {1, 2, 3, 4, 5};

    vector<int> v4(a, a + 5);

    vector<int> v = {1, 2, 3, 4, 5};

    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << endl;
    }

    // cout << v2.size() << endl;

    return 0;
}