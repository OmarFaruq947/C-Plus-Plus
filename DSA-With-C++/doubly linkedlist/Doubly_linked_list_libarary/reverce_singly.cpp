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

void print_recursion(Node *head)
{
    // base
    if (head == NULL)
    {
        return;
    }

    cout << head->value << " ";
    print_recursion(head->next);
}

void print_reverse(Node *head)
{
    // base
    if (head == NULL)
    {
        return;
    }

    print_reverse(head->next);
    cout << head->value << " ";
}

// another way
void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    reverse(head, head);
    print_recursion(head);
    cout << endl;
    // print_reverse(head);

    return 0;
}