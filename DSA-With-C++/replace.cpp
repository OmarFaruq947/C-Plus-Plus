#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 4, 7, 8, 5, 2, 3, 6, 9};
    replace(v.begin(), v.end(), 1, 100);

    for (int val : v)
    {
        cout << val << "  "; // output: 100  4  7  8  5  2  3  6  9
    }

    return 0;
}