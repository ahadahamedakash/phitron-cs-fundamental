#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void delete_at_any_position(Node *&head, int idx)
{

    if (head == NULL)
        return;

    if (idx == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        delete deleteNode;
        return;
    }

    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete deleteNode;
}

void print_forward(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = tail;

    tail->prev = b;
    b->prev = a;
    a->prev = head;

    delete_at_any_position(head, 0);

    print_forward(head);

    return 0;
}
