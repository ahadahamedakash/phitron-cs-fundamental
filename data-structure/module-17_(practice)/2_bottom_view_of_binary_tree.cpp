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
        this->left = NULL;
        this->right = NULL;
    }
};

void bottom_view(Node *root)
{
    queue<pair<Node *, int>> q; // Node & horizontal distance
    map<int, int> m;            // horizontal distance & node value

    if (root)
        q.push({root, 0});

    while (!q.empty())
    {
        Node *f = q.front().first;
        int currentHorizontalDistance = q.front().second;
        q.pop();

        m[currentHorizontalDistance] = f->val;

        if (f->left)
            q.push({f->left, currentHorizontalDistance - 1});
        if (f->right)
            q.push({f->right, currentHorizontalDistance + 1});
    }

    for (auto it : m)
        cout << it.second << " ";
}

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

int main()
{
    fastIO();

    Node *root = btree_input();

    bottom_view(root);

    return 0;
}

/*
INPUT:
    1 2 -1 -1 3 4 5 -1 -1 -1 -1 -1
    1 2 3 -1 -1 4 5 -1 -1 -1 -1
*/
