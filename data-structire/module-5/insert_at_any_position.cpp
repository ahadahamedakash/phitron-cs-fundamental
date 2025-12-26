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

void insert_at_any_position(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);

    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = new Node(5);
    Node *a = new Node(10);
    Node *b = new Node(20);

    head->next = a;
    a->next = b;

    insert_at_any_position(head, 2, 15);

    insert_at_any_position(head, 4, 25);

    print_linked_list(head);

    return 0;
}
