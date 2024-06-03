#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    const string egypt = "EGYPT";

    string::size_type pos = 0;
    while ((pos = str.find(egypt, pos)) != string::npos)
    {
        str.replace(pos, egypt.length(), " ");
        pos += 1;
    }

    cout << str << endl;

    return 0;
}
