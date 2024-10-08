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
        this->left = NULL;  // Corrected: Assigning left pointer to NULL
        this->right = NULL; // Corrected: Assigning right pointer to NULL
    }
};

void preorder(Node *root)
{
    // base case
    if (root == NULL)
        return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void postOrder(Node *root)
{
    // base case
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}

void inOrder(Node *root)
{
    // base case
    if (root == NULL)
        return;
    postOrder(root->left);
    cout << root->val << " ";
    postOrder(root->right);
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // connection
    root->left = a;
    root->right = b;

    a->left = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->right = f;
    d->left = g;
    h->right = i;

    // call
    preorder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    inOrder(root);
    return 0;
}
