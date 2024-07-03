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

int find_max_Min_Difference_value(Node *head)
{
    if (head == NULL)
    {
        return -1;
    }
    int max_value = INT_MIN, min_value = INT_MAX; // new
    Node *tmp = head;
    while (tmp != NULL)
    {
        max_value = max(max_value, tmp->val); // new
        min_value = min(min_value, tmp->val); // new
        tmp = tmp->next;
    }
    return max_value - min_value;
}

int main()
{
    Node *head = NULL;
    int value;
    while (cin >> value && value != -1) // new
    {
        insert_at_tail(head, value);
    }
    int difference = find_max_Min_Difference_value(head);
    cout << difference << endl;

    return 0;
}