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

void insert_at_position(Node *head, int pos, int val)
{ // O(n)
    Node *newNode = new Node(100);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;     // 100 --> 30 ........( 1 )
    tmp->next = newNode;           // 20 --> 100 ........( 2 )
    newNode->next->prev = newNode; // 100 <-- 30 ........( 3 )
    newNode->prev = tmp;           // 20 <-- 100 ........( 4 )
}

int linkedList_size(Node *head)
{ // O(n)

    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_head(Node *&head, Node *&tail, int val)
{ // O(1)
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;

    head = newNode;
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

void delete_at_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *DeleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete DeleteNode;
}

void delete_at_tail(Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}

void delete_at_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
};

int main()
{
    Node *head = NULL;

    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    // connection
    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    Node *tail = c;
    c->prev = b;

    int pos;
    cin >> pos;

    delete_at_position(head, pos);

    delete_at_tail(tail);

    int val = 100;

    if (pos > linkedList_size(head))
    {
        cout << "Invalid !" << endl;
    }
    else if (pos == 0)
    {
        insert_head(head, tail, val);
    }
    else if (pos == linkedList_size(head))
    {
        insert_tail(head, tail, val);
    }
    else
    {
        insert_at_position(head, pos, val);
    }

    print_regular(head);

    cout << "Reverse case: ";
    print_reverse(tail);

    return 0;
}

// input
// print

// delete_at_head
// delete_at_tail
// delete_at_position

// inser_at_head
// insert_at_tail
// inser_at_any_position

// reverse
// sort_assending
// sort_desending