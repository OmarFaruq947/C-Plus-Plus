#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int size;
    cin >> size;
    long int arr[size];

    for (long int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + size);

    for (long int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, arr + size, greater<long int>());

    for (long int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}