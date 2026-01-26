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

int count_depth(Node *root)
{
    if (root == NULL)
        return 0;

    int l = count_depth(root->left);
    int r = count_depth(root->right);

    return max(l, r) + 1;
}

int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;

    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l + r + 1;
}

int main()
{
    Node *root = btree_input();

    int depth = count_depth(root);

    int total_nodes = count_nodes(root);

    if (pow(2, depth) - 1 == total_nodes)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
