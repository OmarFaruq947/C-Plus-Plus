#include<bits/stdc++.h>
using namespace std;

int *func(){
int *x = new int;
    cout << "fun: "<< x <<endl;
    *x = 10;
    return x;
}

int main(){

int *p = func();
cout << "main: "<< *p << endl;

    return 0;
}