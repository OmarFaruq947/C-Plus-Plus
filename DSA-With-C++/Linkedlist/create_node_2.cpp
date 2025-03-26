#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    // constructor declare kore value print kora
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(NULL);
    Node *a= new Node(11);
    Node *b = new Node(22);
    Node *c = new Node(33);
    Node *d = new Node(44);

    // connection

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    // if(head->next->val == a->val) cout<< "yes" <<endl;
    // else cout<< "no" <<endl;
    
    cout<< head <<endl;
    cout<< a->val <<endl;
  

    return 0;
}