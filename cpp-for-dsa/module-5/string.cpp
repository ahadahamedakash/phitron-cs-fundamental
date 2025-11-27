#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "Hello";

    string s2 = "World";

    // s += s2; // Hello World
    // s.append(s2); // Hello World

    // s.push_back('o');

    // s[0] = 'h'; // will change n index character

    // int size = s.size();

    // s.pop_back(); // will remove last character

    // s = "New World"; // will assign new string

    // s.assign("New");

    // s.erase(4); // will remove rest after the 4th index

    // s.erase(2, 2); // will remove from index 2 and 2 character

    // s.replace(5, 0, " Bangladesh");

    s.insert(5, " Bangladesh");

    cout << s << endl;

    return 0;
}