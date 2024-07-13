#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> ld;
    void push(int val) // O(1)
    {
        ld.push_back(val);
    }

    void pop() // O(1)
    {
        ld.pop_back();
    }

    int top() // O(1)
    {
        return ld.back();
    }

    int size() // O(1)
    {
        return ld.size();
    }

    bool empty() // O(1)
    {
        if (ld.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{

    myStack st;
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
