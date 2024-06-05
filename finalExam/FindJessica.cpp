#include <bits/stdc++.h>
using namespace std;

void func(stringstream &ss, bool &result)
{
    string word;
    if (ss >> word)
    {
        if (word == "Jessica")
        {
            result = true;
        }
        func(ss, result);
    }
}

int main()
{
    string S;
    getline(cin, S);
    stringstream ss(S);

    bool result = false;
    func(ss, result);

    if (result)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
