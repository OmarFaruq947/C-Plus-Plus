#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--)
    {
        string str;
        getline(cin, str);

        int first_three = 0;
        int last_three = 0;

        // first three
        for (int i = 0; i < 3; i++)
        {
            int ascii = str[i] - '0';
            first_three = first_three + ascii;
        }
        // cout << first_three << endl;

        // last three
        for (int i = 3; i < 6; i++)
        {
            int ascii = str[i] - '0';
            last_three = last_three + ascii;
        }
        // cout << last_three << endl;

        first_three == last_three ? cout << "YES" : cout << "NO";
    }

    return 0;
}
