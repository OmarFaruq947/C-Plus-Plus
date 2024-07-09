#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_regular(Node *head)
{ // O(n)
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{ // O(n)
    Node *tmp = tail;

    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_tail(Node *&head, Node *&tail, int val)
{ // O(1)
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;

        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    print_regular(head);
    print_reverse(tail);

    return 0;
}