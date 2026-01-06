#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    list<int> l2;

    // l2 = l;
    l2.assign(l.begin(), l.end()); // assign another list

    l.push_back(40); // add element to the tail
    l.push_front(0); // add element to the head
    l.pop_front();   // delete the head
    l.pop_back();    // delete the tail

    /**/
    cout << *next(l.begin(), 2); // access at specific index in list
    /**/

    l.insert(next(l.begin(), 1), 100);               // insert element at the any position
    l.erase(next(l.begin(), 3));                     // delete elements from a specific position
    l.erase(next(l.begin(), 3), next(l.begin(), 5)); // delete elements from a range

    replace(l.begin(), l.end(), 20, 100); // replace a specific element

    auto it = find(l.begin(), l.end(), 200);

    if (it == l.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    for (int val : l)
    {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}
