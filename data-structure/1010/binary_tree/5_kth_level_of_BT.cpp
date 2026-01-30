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

void kth_level(Node *root, int kth)
{
    if (root == NULL)
        return;

    if (kth == 1)
    {
        cout << root->data << " ";
        return;
    }

    kth_level(root->left, kth - 1);
    kth_level(root->right, kth - 1);

    cout << endl;
}

int main()
{
    vector<int> one = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1}; // root -> left -> right

    int idx = -1;

    Node *root = build_tree(one, idx);

    int kth = 2;

    kth_level(root, kth);

    return 0;
}
