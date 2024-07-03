#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void Insert_func(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (!head)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to compare two linked lists.
bool Comparison_func(Node *head1, Node *head2)
{
    while (head1 && head2)
    {
        if (head1->value != head2->value)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return head1 == nullptr && head2 == nullptr;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    int value;
    // first linked list input
    while (cin >> value && value != -1)
    {
        Insert_func(head1, value);
    }

    // second linked list input
    while (cin >> value && value != -1)
    {
        Insert_func(head2, value);
    }

    // Compare the two lists and output the result.
    if (Comparison_func(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
