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

class myStack
{
public:
    // list<int> ld;
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    //...................................................
    void push(int val) // O(1)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    // .....................................................

    void pop() // O(1)
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }

    int top() // O(1)
    {
        return tail->value;
    }

    int size() // O(1)
    {
        return sz;
    }

    bool empty() // O(1)
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main()
{

    myStack st;

    // st.push(10);
    // st.push(20);
    // st.pop();

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) // O(n)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
