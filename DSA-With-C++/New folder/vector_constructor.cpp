#include <bits/stdc++.h>
using namespace std;

int main()
{

    // case 1
    int a[6] = {1, 2, 3, 4, 5, 6};
    vector<int> v(a, a + 6);
    for (int i = 0; i < 6; i++)
        cout << v[i] << " ";

    // case 2
    vector<int> v = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
        cout << v[i] << " ";

    return 0;
}