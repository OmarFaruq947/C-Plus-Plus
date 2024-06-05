#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        string str1, str2;
        cin >> str1 >> str2;

        int str1_size = str1.size();

        for (int i = 0; i < str1_size; i++)
        {
            if (str1[i] == str2[0])
            {
                int cnt = 0, str2_size = str2.size();
                for (int j = 0; j < str2_size; j++)
                {
                    if (str1[i + j] == str2[j])
                        cnt++;
                }

                if (cnt == str2_size)
                {
                    str1.replace(i, str2_size, "#");
                }
            }
        }

        cout << str1 << endl;
    }

    return 0;
}
