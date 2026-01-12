#include <bits/stdc++.h>

using namespace std;

class Stack
{
    list<int> ll;

public:
    void push(int val) // O(1)
    {
        ll.push_front(val);
    }

    void pop() // O(1)
    {
        ll.pop_front();
    }

    int top() // O(1)
    {
        return ll.front();
    }

    bool empty() // O(1)
    {
        return ll.size() == 0;
    }
};

int main()
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
