#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    float A,B;
    cin>> A >> B ;

    if(A>0 & B>0) cout<< "Q1";
    else if(A<0 & B>0) cout<< "Q2";
    else if(A<0 & B<0) cout<< "Q3";
    else if(A>0 & B<0) cout<< "Q4";
    else if(A==0 & B==0) cout<< "Origem";
    else if(A!=0 & B==0) cout<< "Eixo X";
    else if(A==0 & B!=0) cout<< "Eixo Y";


    return 0;
};