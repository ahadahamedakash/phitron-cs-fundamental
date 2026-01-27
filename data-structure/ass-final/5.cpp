#include <bits/stdc++.h>

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
        this->left = NULL;
        this->right = NULL;
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

bool is_leaf(Node *root)
{
    return root && !root->left && !root->right;
}

void print_left_path(Node *root)
{
    if (!root)
        return;

    if (root->left)
    {
        print_left_path(root->left);
        cout << root->val << " ";
    }
    else if (root->right)
    {
        print_left_path(root->right);
        cout << root->val << " ";
    }
    else if (is_leaf(root))
    {
        cout << root->val << " ";
    }
}

void print_right_path(Node *root)
{
    if (!root)
        return;

    if (root->right)
    {
        cout << root->val << " ";
        print_right_path(root->right);
    }
    else if (root->left)
    {
        cout << root->val << " ";
        print_right_path(root->left);
    }
    else if (is_leaf(root))
    {
        cout << root->val << " ";
    }
}

void print(Node *root)
{
    if (!root)
        return;

    if (root->left)
        print_left_path(root->left);

    cout << root->val << " ";

    if (root->right)
        print_right_path(root->right);
}

int main()
{
    Node *root = btree_input();

    print(root);

    return 0;
}
