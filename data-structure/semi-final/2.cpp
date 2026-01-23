#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    list<long long> even;
    list<long long> odd;

    for (int i = 0; i < n; i++)
    {
        long long val;
        cin >> val;
        if (val % 2 == 0)
        {
            even.push_back(val);
        }
        else
        {
            odd.push_back(val);
        }
    }

    even.insert(even.end(), odd.begin(), odd.end());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << even.front() << " ";
    //     even.pop_front();
    // }

    for (auto x : even)
        cout << x << " ";

    return 0;
}
