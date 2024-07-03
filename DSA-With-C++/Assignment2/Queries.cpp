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

// Function to insert a new node at the tail.
void insert_at_tail(Node *&head, int v)
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

// Function to print the linked list.
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Function to insert a new node at the head.
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

// Function to delete a node at a specific index.
void delete_at_index(Node *&head, int index)
{
    if (head == NULL || index < 0)
        return;

    if (index == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node *tmp = head;
    for (int i = 0; tmp != NULL && i < index - 1; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL || tmp->next == NULL)
        return;

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_at_head(head, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, V);
        }
        else if (X == 2)
        {
            delete_at_index(head, V);
        }

        print_linked_list(head);
    }

    return 0;
}
