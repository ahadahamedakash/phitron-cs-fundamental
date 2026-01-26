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

int height(Node *root)
{
    if (root == NULL)
        return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int total_node(Node *root)
{
    if (root == NULL)
        return 0;

    int leftCount = total_node(root->left);
    int rightCount = total_node(root->right);

    return rightCount + leftCount + 1;
}

int sum_of_nodes(Node *root)
{
    if (root == NULL)
        return 0;

    int leftSum = sum_of_nodes(root->left);
    int rightSum = sum_of_nodes(root->right);

    return leftSum + rightSum + root->data;
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1}; // root -> left -> right

    int idx = -1;

    Node *root = build_tree(preorder, idx);

    cout << "Height: " << height(root) << endl;

    cout << "Total Node: " << total_node(root) << endl;

    cout << "Sum: " << sum_of_nodes(root) << endl;

    return 0;
}
