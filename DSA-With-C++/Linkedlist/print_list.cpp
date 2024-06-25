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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    /*  manual system :- 1
    cout << head->value << endl;
    cout << a->value << endl;
    cout << b->value << endl;
    cout << c->value << endl;
    cout << d->value << endl;
    */

    /*  manual system:- 2
        cout << head->value << endl;
        cout << head->next->value << endl;
        cout << head->next->next->value << endl;
        cout << head->next->next->next->value << endl;
        cout << head->next->next->next->next->value << endl;
    */

    /*
        while (head != NULL)
        {
            cout << head->value << endl;
            head = head->next;
        }
        // head  delete hoye gece , this is a very big problem, so, we will working immutably
        while (head != NULL)
        {
            cout << head->value << endl;
            head = head->next;
        }
        */

    // first time print
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }

    // for second time print
    temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }

    return 0;
}