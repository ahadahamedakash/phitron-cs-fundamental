#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    /*
        // element access
    */
    cout << l.back() << endl; // *l.begin() -> it's an iterator so we should derefference to print
    cout << l.front() << endl;

    cout << *next(l.begin(), 2);

    return 0;
}
