#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    cin >> X;
    string result;

    switch (X)
    {
    case 1:
        result = "one";
        break;
    case 2:
        result = "Two";
        break;
     case 3:
        result = "three";
        break;
    case 4:
        result = "Four";
        break;

case 5:
        result = "Five";
        break;
    case 6:
        result = "Six";
        break;
     case 7:
        result = "seven";
        break;
    case 8:
        result = "eight";
        break;
        case 9:
        result = "Nine";
        break;
        case 10:
        result = "Ten";
        break;
    default:
        result = "mil khuje paua jay nay";
        break;
    }

    cout<< result << endl;
}