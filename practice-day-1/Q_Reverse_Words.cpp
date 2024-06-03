#include <bits/stdc++.h>
using namespace std;

void reverseWords(string &S)
{
    int start = 0;
    int end = 0;
    int length = S.length();
    // cout << length << endl;
    while (start < length)
    {

        // find the start index
        while (start < length && S[start] == ' ')
        {
            start++;
        }
        // cout << "start: " << start << endl;

        // find the end index of the word;
        end = start;
        while (end < length && S[end] != ' ')
        {
            end++;
        }
        // cout << "end: " << end << endl;

        reverse(S.begin() + start, S.begin() + end);
        // cout << S << endl;
        start = end;
    }
}

int main()
{
    string S;
    getline(cin, S);
    reverseWords(S);
    cout << S << endl;

    return 0;
}
