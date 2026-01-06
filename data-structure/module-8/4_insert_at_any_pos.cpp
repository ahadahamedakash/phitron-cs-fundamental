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

void insert_at_any_pos(Node *head, int idx, int val)
{
    // Create the new node
    Node *newNode = new Node(val);

    // temp will move to the node just BEFORE the insertion position
    Node *temp = head;

    /*
        Example list before insertion:
        head
         ↓
        [10] <-> [20] <-> [30] <-> NULL

        If idx = 2
        We want to insert AFTER node [20]
    */

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    /*
        Now temp points to:
        temp
         ↓
        [20] <-> [30]
    */

    // Step 1: newNode points to the next node
    newNode->next = temp->next;

    /*
        newNode
           ↓
        [100] -> [30]
    */

    // Step 2: next node's prev points back to newNode
    temp->next->prev = newNode;

    /*
        [20] <-> [100] <-> [30]
                    ↑
                  prev
    */

    // Step 3: temp points forward to newNode
    temp->next = newNode;

    // Step 4: newNode points back to temp
    newNode->prev = temp;

    /*
        Final structure:
        [10] <-> [20] <-> [100] <-> [30] <-> NULL
    */
}

void print_forward(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    // Node *head = NULL;
    // Node *tail = NULL;

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->next = tail;

    tail->prev = a;
    a->prev = head;

    insert_at_any_pos(head, 2, 100);
    insert_at_any_pos(head, 1, 200);

    print_forward(head);

    return 0;
}
