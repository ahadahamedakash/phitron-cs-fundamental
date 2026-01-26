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

void preorder_traverse(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder_traverse(root->left);
    preorder_traverse(root->right);
}

void inorder_traverse(Node *root)
{
    if (root == NULL)
        return;

    inorder_traverse(root->left);
    cout << root->data << " ";
    inorder_traverse(root->right);
}

void postorder_traverste(Node *root)
{
    if (root == NULL)
        return;

    postorder_traverste(root->left);
    postorder_traverste(root->right);
    cout << root->data << " ";
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1}; // root -> left -> right

    int idx = -1;

    Node *root = build_tree(preorder, idx);

    cout << "Preorder Traverse: ";

    preorder_traverse(root);

    cout << endl
         << "Inorder Traverse: ";

    inorder_traverse(root);

    cout << endl
         << "Postorder Traverse: ";

    postorder_traverste(root);

    return 0;
}
