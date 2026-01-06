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

void delete_at_head(Node *&head, Node *&tail)
{
    /*
        Case 1: List before deletion (more than one node)

        head                    tail
         ↓                       ↓
        [10] <-> [20] <-> [30] <-> NULL
    */

    // Step 1: Store the current head node (node to be deleted)
    Node *deleteNode = head;

    /*
        deleteNode
            ↓
        [10] <-> [20] <-> [30]
    */

    // Step 2: Move head to the next node
    head = head->next;

    /*
        head
         ↓
        [20] <-> [30] <-> NULL
    */

    // Step 3: Delete the old head node
    delete deleteNode;

    /*
        Memory of [10] is freed
    */

    // Step 4: If list becomes empty after deletion
    if (head == NULL)
    {
        /*
            Case 2: List had only one node

            Before:
            head, tail
               ↓
              [10] -> NULL

            After:
            head = NULL
            tail = NULL
        */
        tail = NULL;
        return;
    }

    // Step 5: Fix backward link of new head
    head->prev = NULL;

    /*
        Final list after deletion:
        head          tail
         ↓             ↓
        [20] <-> [30] <-> NULL
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
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->next = tail;
    tail->prev = a;
    a->prev = head;

    delete_at_head(head, tail);

    print_forward(head);

    return 0;
}
