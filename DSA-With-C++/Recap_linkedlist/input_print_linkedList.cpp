#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_value_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void second_insert_value_at_tail(Node *&head2, int vt)
{
    Node *newNode = new Node(vt);

    if (head2 == NULL)
    {
        head2 = newNode;
        return;
    }

    Node *tmp = head2;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_likedList(Node *head, Node *head2)
{
    Node *tmp = head;
    Node *tmp2 = head2;

    int count = 0, count2 = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    while (tmp2 != NULL)
    {
        count2++;
        tmp2 = tmp2->next;
    }
    if (count == count2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *head2 = NULL;

    cout << "First Node input :  ";
    while (true)
    {
        int v;

        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_value_at_tail(head, v);
    }

    cout << "Second Node input :  ";
    while (true)
    {
        int vt;

        cin >> vt;
        if (vt == -1)
        {
            break;
        }
        second_insert_value_at_tail(head2, vt);
    }

    print_likedList(head, head2);

    return 0;
}