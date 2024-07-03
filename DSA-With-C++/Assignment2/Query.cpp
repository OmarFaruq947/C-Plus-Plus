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

int find_index(Node *head, int X)
{
    int index = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == X)
        {
            return index;
        }
        tmp = tmp->next;
        index++;
    }
    return -1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Node *head = NULL;
        int value;

        while (cin >> value && value != -1)
        {
            insert_at_tail(head, value);
        }

        int X;
        cin >> X;

        int result = find_index(head, X);
        cout << result << endl;
    }

    return 0;
}
