// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str;
//     getline(cin, str);

//     istringstream iss(str);
//     do
//     {
//         string subs;
//         iss >> subs;

//         // reverse the word:
//         reverse(subs.begin(), subs.end());
//         // print the reversed word
//         cout << subs << " ";

//     } while (iss);

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    string word;
    for (char c : str)
    {
        if (c == ' ')
        {
            if (!word.empty())
            {
                reverse(word.begin(), word.end());
                cout << word << " ";
                word.clear();
            }
        }
        else
        {
            word += c;
        }
    }

    if (!word.empty())
    {
        reverse(word.begin(), word.end());
        cout << word;
    }

    return 0;
}
