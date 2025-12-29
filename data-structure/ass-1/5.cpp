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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void delete_after(Node *prev, Node *&tail)
{
    Node *deleteNode = prev->next;
    if (deleteNode == NULL)
        return;

    prev->next = deleteNode->next;
    if (deleteNode == tail)
        tail = prev;
    delete deleteNode;
}

void remove_duplicates(Node *head, Node *&tail)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *temp = current;
        while (temp->next != NULL)
        {
            if (temp->next->val == current->val)
            {
                delete_after(temp, tail);
            }
            else
            {
                temp = temp->next;
            }
        }
        current = current->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    remove_duplicates(head, tail);

    print_linked_list(head);

    return 0;
}
