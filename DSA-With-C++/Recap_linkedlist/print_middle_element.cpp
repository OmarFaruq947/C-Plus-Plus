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

int print_likedList(Node *head)
{

    Node *tmp = head;

    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    cout << endl;

    return count;
}

void any_position_print(Node *head, int pos)
{
    Node *tmp = head;
    int exact_position = pos / 2;
    if (pos == 1)
    {
        cout << "middle value is not available, your value is" << pos << "but, minimum three value required" << endl;
    }
    else if (pos == 2)
    {
        cout << "middle value is not available, your value is" << pos << "but, minimum three value required" << endl;
    }
    else if (pos % 2 != 0)
    {
        for (int i = 1; i < exact_position; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->next->val << endl;
    }
    else if (pos % 2 == 0)
    {
        for (int i = 1; i < exact_position; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val << endl;
    }
}

int main()
{
    Node *head = NULL;

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
    int count = print_likedList(head);
    any_position_print(head, count);

    return 0;
}