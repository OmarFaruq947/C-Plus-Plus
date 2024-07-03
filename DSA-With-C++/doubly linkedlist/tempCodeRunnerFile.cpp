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
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;

    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_position(Node *head, int pos, int val)
{
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
{

    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_head(Node *&head, Node *tail, int val)
{
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int pos = 3;
    int val = 100;

    if (pos == 0)
    {
        insert_head(head, tail, val);
        print_regular(head);
    }
    else if (pos >= linkedList_size(head))
    {
        cout << "Invalid Position !" << endl;
    }
    else
    {

        insert_at_position(head, pos, val);
        print_regular(head);
    }

    // print_reverse(tail);

    return 0;
}