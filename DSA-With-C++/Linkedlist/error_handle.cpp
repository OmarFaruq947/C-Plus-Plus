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
    Node *newNode = new Node(v); // new node create, but not value assigned

    if (head == NULL) // exception handle ....................[1*]
    {
        head = newNode; // " head = newNode; " ay vhabe dile kag korbe na, karon head nije akta pointer, ar pointer ke update korte hole de-reference kore update korte hoy  ar  de-reference na korle parameter e reference (&) add korte hoy.
        cout << endl
             << endl
             << "value Inserted at the HEAD." << endl
             << endl;
        return; // return na dile infinite hoye jabe , karon head jodi null thake, tahole head key new node bole ber hoye jete hobe. ay jonno return use korte hobe.
    }

    Node *tmp = head;         // main node ke change kora jabe na, ay jonno immutably korar jonno main node r copy create kora holo
    while (tmp->next != NULL) // value insert loop--------------(1) explanation nice dea ache
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node ache , but value assign kora hoy nay.
    tmp->next = newNode; // tmp te new node assign kora holo
    cout << endl
         << endl
         << "Inserted at the tail." << endl
         << endl;
}

// this function for print linked-list
void print_linked_list(Node *head)
{
    cout << endl
         << "Your Linked list: ";
    Node *tmp = head;   // main node ke change kora jabe na, ay jonno immutably korar jonno main node r copy create kora holo
    while (tmp != NULL) // printing loop--------------(2)  explanation nice dea ache
    {
        cout << tmp->val << " "; // ...............(3)  explanation nice dea ache
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

//  Insert at any Position
void insert_at_any_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL) // Error handle .............. [3*]
        {
            cout << "Invalid Index !!!" << endl
                 << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

// insert_at_head
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Insert at HEAD." << endl
         << endl;
}

// delete node
void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next; // jake delete korbo tar ager node e obosthan korchi
        if (tmp == NULL) // Error handle .............. [5*]
        {
            cout << "Invalid Index !!!" << endl
                 << endl;
            return;
        }
    }

    if (tmp == NULL) // Error handle .............. [5.1*]
    {
        cout << "Invalid Index !!!" << endl
             << endl;
        return;
    }

    Node *deleteNode = tmp->next; // backup the deleted node
    tmp->next = tmp->next->next;  // connection done
    delete deleteNode;
    cout << endl
         << endl
         << "Successfully node DELETED ! " << endl
         << endl;
}

// delete head
void delete_head(Node *&head)
{
    if (head == NULL) // Error handle .............. [6*]
    {
        cout << "Head is not available !" << endl
             << endl;
        return;
    }
    else
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        cout << endl
             << endl
             << "Successfully HEAD delete !" << endl
             << endl;
    }
}

int total_node_count(Node *head)
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

int main()
{
    Node *head = NULL; // create node pointer, jar value null and memory address null,

    while (true)
    {
        cout << "option 1: Insert at Tail" << endl;          // done [1*]
        cout << "option 2: Print linked list" << endl;       // done [no error just print]
        cout << "option 3: Insert at any Position:" << endl; // done [3*]
        cout << "option 4: Insert at Head:" << endl;         // done [ no issue]
        cout << "option 5: Delete the position. " << endl;   // done [5* & 5.1*]
        cout << "option 6: Delete the HEAD. " << endl;       // done [6*]
        cout << "option 7: Total Node Number. " << endl;
        cout << "option 8: Terminate" << endl // done [no issue]
             << endl;
        int op;

        cout << "please Enter Option: ";
        cin >> op;

        if (op == 1)
        {
            int v;
            cout << "please Enter Value : ";
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "Enter the Position: " << endl;
            cin >> pos;
            cout << "Enter the value: " << endl;
            cin >> v;

            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_any_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter the value: " << endl;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter A position for DELETE ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {

                delete_from_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            cout << total_node_count(head) << "  ";
        }
        else if (op == 8)
        {
            break; // program terminate hoye jabe.
        }
    }

    return 0;
}