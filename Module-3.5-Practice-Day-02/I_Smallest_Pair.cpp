#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }


    int value;
    for (int i = 1; i <= size - 1; i++)
    {
        int j = 2
        while (j <= size)
        {
            value = arr[i] + arr[j] + j - i;
            cout << value << "\n";
        }
            j++;
    }

    return 0;
}