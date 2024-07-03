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

// insert value at the tail
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v); // create a node
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Value inserted at the head." << endl
             << endl;
        return;
    }
    Node *tmp = head; // backup main head
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at the tail." << endl
         << endl;
}
// print linked list
void print_linked_list(Node *head)
{
    Node *tmp = head;
    cout << "Your Linked List : ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// insert_at_any_position
void insert_at_any_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid position !, please try again, thank you." << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

int main()
{

    Node *head = NULL;

    while (true)
    {
        cout << "Option-1 : Insert value at the TAIL." << endl;
        cout << "Option-2 : Print Your Linked List." << endl;
        cout << "Option-3 : INsert at any Position." << endl;
        cout << "Option-7 : Terminate Program." << endl;
        int option;
        cout << "Enter Option :  ";
        cin >> option;

        if (option == 1)
        {
            int v;
            cout << "Input Linked list:  ";
            cin >> v;

            insert_at_tail(head, v); // head & value  required
        }
        else if (option == 2)
        {
            print_linked_list(head); // only head required
        }
        else if (option == 3)
        {
            int pos, v;
            cout << "Enter Position: ";
            cin >> pos;
            cout << "Enter Value: ";
            cin >> v;

            insert_at_any_position(head, pos, v);
        }
        else if (option == 7)
        {
            break;
        }
    }

    return 0;
}