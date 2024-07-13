#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 7, 8, 9, 4, 5, 6};
    auto it = find(v.begin(), v.end(), 4);

    it == v.end() ? cout << "Not Found" : cout << "Found";

    return 0;
}