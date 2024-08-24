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

Node *input_tree()
{
    int val;
    cout << "10 20 60 30 50 70 -1 -1 40 ↲ -1 -1 -1 -1 80 -1 -1 -1" << endl;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {

        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. jabotio kag koro
        int l, r;
        cin >> l >> r;
        Node *newLeft;
        Node *newRight;
        if (l == -1)
            newLeft = NULL;
        else
            newLeft = new Node(l);

        if (r == -1)
        {
            newRight = NULL;
        }
        else
        {
            newRight = new Node(r);
        }

        p->left = newLeft;
        p->right = newRight;

        // 3. children gulo ke push koro
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}
// level-order traverse
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *f = q.front();
        q.pop();
        //.....................................................

        // 2. jabotio ja kaj ache ta koro
        cout << f->val << " ";

        //.....................................................

        // 3. tar children gulo ke rakho
        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}
// pre-order traverse
void preorder(Node *root)
{
    // base case
    if (root == NULL)
        return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
// post-order traverse
void postOrder(Node *root)
{
    // base case
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}
// in-order traverse
void inOrder(Node *root)
{
    // base case
    if (root == NULL)
        return;
    postOrder(root->left);
    cout << root->val << " ";
    postOrder(root->right);
}
// count number of node
int count_node(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = count_node(root->left);
    int r = count_node(root->right);

    return l + r + 1;
}
// count leaf
int count_leaf(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l + r;
    }
}
// count number of maximum depth
int maxHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();
    cout << endl;
    level_order(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    cout << count_node(root) << endl;
    cout << count_leaf(root) << endl;
    cout << maxHeight(root) << endl;
    return 0;
}
