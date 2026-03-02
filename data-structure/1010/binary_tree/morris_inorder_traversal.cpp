#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};

Node *btree_input()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
void morris_inorder(Node *root)
{
    Node *curr = root; // Step 1: Start from root

    while (curr != NULL) // Step 2: Continue until traversal finishes
    {
        // Step 3: If there is NO left subtree
        if (curr->left == NULL)
        {
            // Left already satisfied → visit current node
            cout << curr->val << " ";

            // Move to right subtree
            curr = curr->right;
        }
        else
        {
            // Step 4: Find inorder predecessor (rightmost node of left subtree)
            Node *IP = curr->left;

            while (IP->right != NULL && IP->right != curr)
                IP = IP->right;

            // Step 5: If thread does NOT exist
            if (IP->right == NULL)
            {
                // Create temporary thread to return later
                IP->right = curr;

                // Move to left subtree to continue traversal
                curr = curr->left;
            }
            else
            {
                // Step 6: Thread exists → left subtree already visited

                // Remove the temporary thread (restore tree)
                IP->right = NULL;

                // Visit current node
                cout << curr->val << " ";

                // Move to right subtree
                curr = curr->right;
            }
        }
    }
}

int main()
{
    fastIO();

    Node *root = btree_input();

    inorder(root);

    cout << nl;

    morris_inorder(root);

    cout << nl;

    return 0;
}

/*
INPUT:
    4
    2 5
    1 3
    -1 -1
    -1 -1
    -1 -1
*/
