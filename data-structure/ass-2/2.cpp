#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Stack
{
    list<int> ll;

public:
    void push(int val)
    {
        ll.push_front(val);
    }

    void pop()
    {
        ll.pop_front();
    }

    int top()
    {
        return ll.front();
    }

    bool empty()
    {
        return ll.size() == 0;
    }
};

class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;

        head = head->next;
        delete deleteNode;

        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front()
    {
        return head->val;
    }

    int back()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    Stack s;
    Queue q;

    int stackSize, queueSize;

    cin >> stackSize >> queueSize;

    for (int i = 0; i < stackSize; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    for (int i = 0; i < queueSize; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (stackSize != queueSize)
    {
        cout << "NO\n";
        return 0;
    }

    bool flag = true;

    for (int i = 0; i < stackSize;)
    {
        if (s.top() == q.front())
        {
            s.pop();
            q.pop();
            i++;
        }
        else
        {
            flag = false;
            break;
        }
    }

    cout << (!flag ? "NO\n" : "YES\n");

    return 0;
}
