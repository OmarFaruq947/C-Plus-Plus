#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {

        int size;
        cin >> size;
        vector<int> arr(size);

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        vector<int> arr2 = arr;
        sort(arr2.begin(), arr2.end());

        if (arr == arr2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}