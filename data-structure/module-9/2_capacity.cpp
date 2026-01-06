#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l(5, 1);

    l.size();         // returns the size of the list
    l.max_size();     // returns the maximum size that the list can hole
    l.clear();        // clears the list elements
    l.empty();        // returns true/false if the list is empty or not
    l.resize(5, 100); // change the size of the list

    return 0;
}
