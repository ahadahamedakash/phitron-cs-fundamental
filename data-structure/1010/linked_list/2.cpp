#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *pre;
    Node(int val)
    {
        data = val;
        next = pre = NULL;
    }
};

class DoublyList
{
    Node *head;
    Node *tail;

public:
    DoublyList()
    {
        head = tail = NULL;
    }

    void push_fornt(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->pre = newNode;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->pre = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
            return;

        Node *temp = head;

        head = head->next;
        if (head != NULL)
            head->pre = NULL;

        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
            return;

        Node *temp = tail;

        tail = temp->pre;

        if (tail != NULL)
            tail->next = NULL;

        temp->pre = NULL;
        delete temp;
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    DoublyList dll;

    dll.push_fornt(3);
    dll.push_fornt(2);
    dll.push_fornt(1);
    dll.push_fornt(0);

    dll.pop_front();
    dll.pop_back();

    // dll.push_back(1);

    dll.print();

    return 0;
}
