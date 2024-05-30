#include<bits/stdc++.h>
using namespace std;

void func(stringstream & ss){
    string word;
    if(ss >> word){
        cout << word <<endl;
        func(ss);
    }
}

int main(){

string S;
getline (cin, S);
stringstream ss(S);
func(ss);
return 0;
}