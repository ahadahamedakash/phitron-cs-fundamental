#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// static int idx = -1;

Node *build_tree(vector<int> preorder, int &idx)
{
    idx++;

    if (preorder[idx] == -1)
        return NULL;

    Node *root = new Node(preorder[idx]);

    root->left = build_tree(preorder, idx);  // LEFT
    root->right = build_tree(preorder, idx); // RIGHT

    return root;
}

bool is_identical(Node *p, Node *q)
{
    if (!p || !q)
        return p == q;

    bool isLeftIdentical = is_identical(p->left, q->left);
    bool isRightIdentical = is_identical(p->right, q->right);

    return isLeftIdentical && isRightIdentical && p->data == q->data;
}

bool is_sub_tree(Node *root, Node *subroot)
{
    if (root == NULL || subroot == NULL)
        return root == subroot;

    if (root->data == subroot->data && is_identical(root, subroot))
        return true;

    return is_sub_tree(root->left, subroot) || is_sub_tree(root->right, subroot);
}

int main()
{
    vector<int> one = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1}; // root -> left -> right

    vector<int> two = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1}; // root -> left -> right

    vector<int> three = {3, 4, -1, -1, 5, -1, -1};

    int idx_one = -1;
    int idx_two = -1;
    int idx_three = -1;

    Node *root_one = build_tree(one, idx_one);

    Node *root_two = build_tree(two, idx_two);

    Node *root_three = build_tree(three, idx_three);

    // cout << is_identical(root_one, root_two) << endl;

    cout << is_sub_tree(root_one, root_three);

    return 0;
}
