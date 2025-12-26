#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};

void print(Node *head)
{

    cout << head << " THis is head: " << endl;
    Node *tempHead = head;
    while (tempHead != NULL)
    {
        cout << tempHead->value << endl;
        tempHead = tempHead->next;
    }
}

int main()
{
    Node *head = new Node(5);
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);

    head->next = node1;
    node1->next = node2;

    // Node *tempHead = head;

    print(head);

    // while (tempHead != NULL)
    // {
    //     cout << tempHead->value << endl;
    //     tempHead = tempHead->next;
    // }
    return 0;
}
