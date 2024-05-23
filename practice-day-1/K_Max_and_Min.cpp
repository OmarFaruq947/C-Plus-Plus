#include<bits/stdc++.h>
using namespace std;

int main(){

int A,B,C;
cin >> A >> B >> C ;

int max=A, min=A;


    if (B < min) {
        min = B;
    }
    if (B > max) {
        max = B;
    }

    if (C < min) {
        min = C;
    }
    if (C > max) {
        max = C;
    }

cout << min <<" "<< max <<endl;
return 0;
}