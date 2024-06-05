#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int size;
        cin >> size;
        string s;
        cin >> s;

        // Boolean array to keep track of solved problems
        bool solved[26] = {false};
        int balloons = 0;

        for (char problem : s)
        {
            int index = problem - 'A'; // Convert problem character to index (0-25)
            if (!solved[index])
            {
                // First time solving this problem
                balloons += 2;
                solved[index] = true;
            }
            else
            {
                // Already solved this problem before
                balloons += 1;
            }
        }

        cout << balloons << endl;
    }

    return 0;
}
