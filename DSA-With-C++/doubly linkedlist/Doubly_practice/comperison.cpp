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

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    // newNode->prev = NULL;
}

void doubly_print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = head;
    Node *tail = tail;

    int val;
    cout << "input Value: " << "  ";
    while (cin >> val && val != -1)
    {
        insert_at_head(head, val);
        cout << "Insert at Head." << endl;
    }
    doubly_print(head);

    return 0;
}