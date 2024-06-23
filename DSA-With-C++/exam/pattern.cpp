#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int step_1 = 0, step_2 = (size - 2), mid = (size - 1) / 2;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < step_1; j++)
        {
            cout << " ";
        }
        if (i == mid)
        {
            cout << "X";
            step_1--;
        }
        else if (i < mid)
        {
            cout << '\\';
            step_1++;
        }
        else if (i > mid)
        {
            cout << "/";
            step_1--;
        }

        for (int k = 0; k < step_2; k++)
        {
            cout << " ";
        }
        if (i == mid)
        {
            step_2 += 2;
        }
        else if (i < mid)
        {
            cout << '/';
            step_2 -= 2;
        }
        else if (i > mid)
        {
            cout << '\\';
            step_2 += 2;
        }
        cout << endl;
    }

    return 0;
}