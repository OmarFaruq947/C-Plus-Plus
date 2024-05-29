#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;

    vector<int> arr1(size);
    vector<int> arr2(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }


    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }


    bool equal = false;
    for (int i = 0; i < size; i++)
    {

         v = strcmp(arr1[i], arr2[i]);
        // cout << arr1[i] <<" "; 
        // cout << arr2[i] << " ";
        
    }


    // if (equal)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    return 0;
}