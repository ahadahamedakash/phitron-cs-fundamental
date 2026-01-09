#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class CircularList
{
    Node *head;
    Node *tail;

public:
    CircularList()
    {
        head = tail = NULL;
    }

    void insert_at_head(int val)
    {
        Node *newNode = new Node(val);

        if (tail == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void insert_at_tail(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = newNode;
        }
        else
        {
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print()
    {
        if (head == NULL)
            return;

        cout << head->data << "->";

        Node *temp = head->next;

        while (temp != head)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << head->data << endl;
    }
};

int main()
{

    CircularList cll;

    // cll.insert_at_head(2);
    cll.insert_at_head(1);
    cll.insert_at_tail(2);
    cll.insert_at_tail(3);

    cll.print();

    return 0;
}
