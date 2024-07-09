#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> myList = {1, 1, 1, 2, 2, 2, 2, 5, 4, 4, 4, 7, 8, 9, 9, 9};
    // myList.remove(9);
    myList.sort();

    myList.sort(greater<int>());

    myList.unique();
    myList.reverse();
    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}