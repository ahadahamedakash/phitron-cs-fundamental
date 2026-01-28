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

void top_view(Node *root)
{
    queue<pair<Node *, int>> q; // {Node, HD}
    map<int, int> m;            //<HD, node val>

    q.push({root, 0});

    while (q.size() > 0)
    {
        Node *current = q.front().first;
        int currentHD = q.front().second;
        q.pop();

        if (m.find(currentHD) == m.end())
        {
            m[currentHD] = current->data;
        }

        if (current->left != NULL)
        {
            q.push({current->left, currentHD - 1});
        }

        if (current->right != NULL)
        {
            q.push({current->right, currentHD + 1});
        }
    }

    for (auto it : m)
    {
        cout << it.second << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> one = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1}; // root -> left -> right

    int idx = -1;

    Node *root = build_tree(one, idx);

    top_view(root);

    return 0;
}
