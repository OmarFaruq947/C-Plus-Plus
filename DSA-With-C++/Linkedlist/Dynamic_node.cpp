#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main()
{
    // Node head(10);  // static allocation
    Node *head = new Node(10); // dynamic allocation
    Node *a = new Node(200);
    Node *b = new Node(80);
    Node *c = new Node(100);

    head->next = a;
    a->next = b; // Link node a to node b
    b->next = c;

    // cout << head->value << endl;
    // cout << a->value << endl;

    cout << head->next->value << endl; // a == head->next
    cout << head->value << endl;
    cout << a->next->value << endl;
    cout << b->next->value << endl;

    return 0;
}