#include <bits/stdc++.h>
using namespace std;

int main()
{

    int A, B, C;
    char S,Q;

    string input;
    getline(cin, input);
    stringstream ss(input);
    ss >> A >> S >> B >> Q >> C;
    // cin >> A >> S >> B >> Q >> C;

    int result;

    switch (S){
    case '+':
            result = A+B;
        break;

    case '-':
            result = A-B;
        break;

    case '*':
            result = A*B;
        break;
    }




if(result == C){
    cout << "Yes" <<endl;
}else {
    cout << result <<endl;
}

    return 0;
}