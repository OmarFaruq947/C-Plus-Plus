#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5};

    cout << v[v.size() - 2] << endl; // 4
    cout << v[0] << endl;            // first index

    cout << v.back() << endl;  // last value: 5
    cout << v.front() << endl; // first value: 1

    return 0;
}