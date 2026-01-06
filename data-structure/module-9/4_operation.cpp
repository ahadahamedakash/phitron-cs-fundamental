#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    l.sort(greater<int>()); // will sort in descending order
    l.unique();             // will work on sorted list and keep only unique values
    l.reverse();            // will reverse the list

    return 0;
}
