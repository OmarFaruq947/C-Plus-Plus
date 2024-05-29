#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test_case;

    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        int size, some, result = 0;
        cin >> size >> some;


        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        if (size > 2)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 1; j < size; j++)
                {
                    for (int k = 2; k < size; k++)
                    {
                        if (i == j || i == k || j == k)
                            continue;
                        else if (arr[i] + arr[j] + arr[k] == some)
                        {
                            result = 1;
                            break;
                        }
                    }
                }
            }
        }
        result == 1 ? cout << "YES" : cout << "NO";
            cout << endl;
    }

    return 0;
}