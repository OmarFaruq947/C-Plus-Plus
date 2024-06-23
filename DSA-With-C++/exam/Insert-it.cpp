#include <bits/stdc++.h>
using namespace std;

void printarray(int *arr, int *arr2, int index, int size, int size2)
{
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << " ";
    }

    for (int i = index; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int size2;
    cin >> size2;
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    int index;
    cin >> index;

    printarray(arr, arr2, index, size, size2);

    return 0;
}