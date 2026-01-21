#include <bits/stdc++.h>

using namespace std;

void perms(vector<int> &arr, int idx)
{
    if (idx == arr.size())
    {
        for (int val : arr)
            cout << val << " ";

        cout << endl;
        return;
    }

    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[idx], arr[i]);

        perms(arr, idx + 1);
        swap(arr[idx], arr[i]);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};

    perms(arr, 0);

    return 0;
}
