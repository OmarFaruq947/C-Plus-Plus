#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int N;
        char c;

        cin >> N >> c;

        for (int i = 0; i < N; i++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}