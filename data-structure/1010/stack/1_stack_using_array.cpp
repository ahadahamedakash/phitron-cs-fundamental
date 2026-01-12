#include <bits/stdc++.h>

using namespace std;

class Stack
{
    vector<int> v;

public:
    void push(int val) // O(1)
    {
        v.push_back(val);
    }

    void pop() // O(1)
    {
        v.pop_back();
    }

    int top() // O(1)
    {
        return v[v.size() - 1];
    }

    bool empty() // O(1)
    {
        return v.size() == 0;
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
