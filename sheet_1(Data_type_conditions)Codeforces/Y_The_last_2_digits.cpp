#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    long int A,B,C,D; 
    cin>> A >> B >> C >> D ;

    
    long long int multiplication= 1;
    multiplication = (multiplication * A)%100;
    multiplication = (multiplication * B)%100;
    multiplication = (multiplication * C)%100;
    multiplication = (multiplication * D)%100;  

    int last_digit1 = multiplication %10;
    int last_digit2 = (multiplication /10) % 10;


     cout<< last_digit2<<last_digit1 <<endl;

    return 0;
};