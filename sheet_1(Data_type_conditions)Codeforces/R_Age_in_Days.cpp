#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);
long long int A;
cin>> A ;

int year = A/365;
cout<<year<<" years"<<endl;

int month = (A-(year*365))/30;
cout<< month <<" months"<<endl;

int day = A-((year*365)+(month*30));
cout<< day <<" days"<<endl;
    


    return 0;
};