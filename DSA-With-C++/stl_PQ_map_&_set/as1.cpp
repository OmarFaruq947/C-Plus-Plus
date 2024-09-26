#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        set<int> s;
        int value;
        cin >> value;

        for (int i = 1; i <= value; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        for (auto i = s.begin(); i != s.end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;
    }

    return 0;
}