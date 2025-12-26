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

int main()
{
    Node *head = new Node(0);
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Node *tempHead = head;

    while (tempHead != NULL)
    {
        cout << tempHead->val << endl;
        tempHead = tempHead->next;
    }

    // cout << node1 << endl;

    return 0;
}
