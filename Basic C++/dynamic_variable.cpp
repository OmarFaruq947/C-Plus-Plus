#include<bits/stdc++.h>
using namespace std;

int * func(){
    int * a= new int;
    *a=10;
    cout <<"address of: "<< a <<endl;
}

int main(){

int *p= func();
cout << &p <<endl;

return 0;
}