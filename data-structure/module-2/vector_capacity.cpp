#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    cout << v.size() << endl;
    v.push_back(2);
    cout << v.size() << endl;
    v.push_back(4);
    cout << v.size() << endl;
    v.push_back(6);
    cout << v.size() << endl;

    v.resize(2);
    v.clear();
    v.capacity();
    v.max_size();
    v.empty();

    return 0;
}