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

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    Node *tmp = tail;
    tmp->next = newNode;
    tail = newNode;
}

void find_max_Min_Difference_value(Node *head)
{
    int min_value = INT_MAX, max_value = INT_MIN;

    Node *tmp = head;
    while (tmp != NULL)
    {
        min_value = min(min_value, tmp->val);
        max_value = max(max_value, tmp->val);
        tmp = tmp->next;
    }

    cout << max_value - min_value; // difference value
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;

        insert_at_tail(head, tail, n);
    }

    find_max_Min_Difference_value(head);

    return 0;
}