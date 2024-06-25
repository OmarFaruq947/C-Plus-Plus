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
    Node a(10);
    Node b(30);

    a.next = &b;

    cout << a.val << endl;
    cout << b.val << endl;
    cout << a.next->val << endl;
    cout << b.next->val << endl;

    return 0;
}