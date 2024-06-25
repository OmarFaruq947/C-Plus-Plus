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

// this function for value insert in the linked list
void insert_at_tail(Node *&head, int v)
{
    cout << "please Enter Value : ";
    Node *newNode = new Node(v); // new node create, but not value assigned

    // exception handle
    if (head == NULL)
    {
        head = newNode; // " head = newNode; " ay vhabe dile kag korbe na, karon head nije akta pointer, ar pointer ke update korte hole de-reference kore update korte hoy  ar  de-reference na korle parameter e reference (&) add korte hoy.
        return;         // return na dile infinite hoye jabe , karon head jodi null thake, tahole head key new node bole ber hoye jete hobe. ay jonno return use korte hobe.
    }

    Node *tmp = head;         // main node ke change kora jabe na, ay jonno immutably korar jonno main node r copy create kora holo
    while (tmp->next != NULL) // value insert loop--------------(1) explanation nice dea ache
    {
        tmp = tmp->next; // ................(4)
    }
    // tmp ekhon last node ache , but value assign kora hoy nay.
    tmp->next = newNode; // tmp te new node assign kora holo
}

// this function for print linked-list
void print_linked_list(Node *head)
{
    cout << "Your Linked list: ";
    Node *tmp = head;   // main node ke change kora jabe na, ay jonno immutably korar jonno main node r copy create kora holo
    while (tmp != NULL) // printing loop--------------(2)  explanation nice dea ache
    {
        cout << tmp->val << " "; // ...............(3)  explanation nice dea ache
        tmp = tmp->next;         // ................(4)
    }
    cout << endl;
}

int main()
{
    Node *head = NULL; // create node pointer, jar value null and memory address null, first kisuy nay

    while (true)
    {
        cout << "option 1: Insert at Tail" << endl;
        cout << "option 2: Print linked list" << endl;
        cout << "option 3: Terminate" << endl;
        int op;
        cin >> op; // option input

        if (op == 1)
        {
            cout << "please Enter Option: ";
            int v;
            cin >> v; // linked list value input.

            insert_at_tail(head, v); // option 1 select korle linkedlist input near function run hobe.
        }
        else if (op == 2)
        {
            print_linked_list(head); // option 2 select korle linked list print kore dekhabe.
        }
        else if (op == 3)
        {
            break; //  option 3 select korle program terminate hoye jabe.
        }
    }

    return 0;
}