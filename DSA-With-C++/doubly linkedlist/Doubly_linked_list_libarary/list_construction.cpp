// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // create a list
//     list<int> myList(5, 4); // myList(size, value)
//     // cout << myList.size() << endl;
//     cout << myList.front() << endl; // first value

//     // iterator loop
//     for (auto i = myList.begin(); i != myList.end(); i++)
//     {
//         cout << *i << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> list2 = {1, 2, 3, 4, 5, 6};
    int a[5] = {10, 2, 3, 4, 7};
    list<int> myList(a, a + 5);
    // list<int> myList(list2); // list2, myList r moddhe copy holo  ; complexity O(n)

    // longcurt  ( iterator loop )
    // for (auto i = myList.begin(); i != myList.end(); i++)
    // {
    //     cout << *i  << endl;
    // }

    // shortCurt ( Range base for loop)
    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}