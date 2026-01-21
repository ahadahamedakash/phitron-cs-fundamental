#include <bits/stdc++.h>

using namespace std;

void print_subsets(vector<int> &arr, vector<int> &subsets, int i)
{
    if (i == arr.size())
    {
        for (int val : subsets)
        {
            cout << val << " ";
        }

        cout << endl;
        return;
    }

    // INCLUDE
    subsets.push_back(arr[i]);
    print_subsets(arr, subsets, i + 1);

    subsets.pop_back(); // BACKTRACK
    // EXCLUDE
    print_subsets(arr, subsets, i + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> subsets;

    print_subsets(arr, subsets, 0);

    return 0;
}
