#include <bits/stdc++.h>
using namespace std;

int main()
{
    // push_back == tail insert
    // push_front == head insert
    // pop_back == tail delete
    // pop_front == head delete
    list<int> myList = {10, 20, 30, 4, 0, 50, 60};

    // myList.push_back(5000);
    // myList.push_back(44);
    // myList.push_front(4000);
    // myList.pop_back();
    // myList.pop_front();

    // any position insert
    // myList.insert(next(myList.begin(), 3), 100);                       // one value insert on 3 no: position
    // myList.insert(next(myList.begin(), 3), {200, 300, 500, 800, 900}); // many value insert on 3 no: position
    // value insert from others  list
    // list<int> newList = {0, 00, 00, 11, 22, 33};
    // myList.insert(next(myList.begin(), 3), newList.begin(), newList.end());

    // erase
    myList.erase(next(myList.begin(), 3), next(myList.begin(), 5));
    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}