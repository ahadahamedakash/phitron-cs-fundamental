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

int sumtree(Node *root)
{
    if (root == NULL)
        return 0;

    int leftSum = sumtree(root->left);
    int rightSum = sumtree(root->right);

    root->val += leftSum + rightSum;
    return root->val;
}

void preorder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    fastIO();

    Node *root = btree_input();

    preorder(root);
    cout << nl;

    sumtree(root);

    preorder(root);
    cout << nl;

    return 0;
}

/*
INPUT:
    1 2 3 -1 -1 4 5 -1 -1 -1 -1

        1
       / \
      2   3
         / \
        4   5
*/
