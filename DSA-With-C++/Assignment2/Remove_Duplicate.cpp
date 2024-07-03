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

// Function to remove duplicates from the linked list.
void remove_duplicates(Node *&head)
{
    Node *current = head;
    while (current != NULL)
    {
        Node *runner = current;
        while (runner->next != NULL)
        {
            if (runner->next->val == current->val)
            {
                Node *duplicate = runner->next;
                runner->next = runner->next->next;
                delete duplicate;
            }
            else
            {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

int main()
{
    Node *head = NULL;
    int value;

    // Read input for the linked list.
    while (cin >> value && value != -1)
    {
        insert_at_tail(head, value);
    }

    // Remove duplicates and print the linked list.
    remove_duplicates(head);
    print_linked_list(head);

    return 0;
}
