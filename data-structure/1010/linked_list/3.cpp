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

        if (tail == NULL) // we can check also if head == NULL (because both will be NULL if the list is empty)
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

    void delete_at_head()
    {
        if (head == NULL)
            return;

        if (head == tail) // single node
        {
            delete head;
            head = tail = NULL;
        }
        else // 2 or more nodes
        {
            Node *temp = head;

            head = head->next;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }
    }

    void delete_at_tail()
    {
        if (head == NULL) // empty list
        {
            return;
        }
        else if (head == tail) // single node
        {
            delete head;
            head = tail = NULL;
        }
        else // 2 or more nodes
        {
            Node *temp = tail;

            Node *pre = head;
            while (pre->next != tail)
            {
                pre = pre->next;
            }

            tail = pre;
            tail->next = head;
            temp->next = NULL;
            delete temp;
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

    // cll.delete_at_head();
    cll.delete_at_tail();
    // cll.delete_at_tail();

    cll.print();

    return 0;
}
