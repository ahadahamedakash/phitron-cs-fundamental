#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> mp;

    mp["tamim"] = 2; // log N
    mp["hamim"] = 3; // log N
    mp["ramim"] = 4; // log N

    for (auto it = mp.begin(); it != mp.end(); it++) // O(n log n)
    {
        cout << it->first << " " << it->second << endl; // log N
    }

    cout << endl;

    if (mp.count("hamim"))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
