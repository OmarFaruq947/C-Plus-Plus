#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 60};
    v.erase(v.begin() + 3, v.begin() + 5);

    for (int val : v)
    {
        cout << val << endl; // 1, 2, 3, 60
    }
    return 0;
}