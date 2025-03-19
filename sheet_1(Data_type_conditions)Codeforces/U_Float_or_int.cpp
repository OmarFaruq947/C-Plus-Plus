#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    float A; cin>> A ;

    int integer = floor(A);
    float decimal = A - integer;

    
    if(decimal == 0){
        cout<<"int"<<" "<<integer<<endl;
    }else{
        cout<< fixed<<setprecision(3);
        cout<< "float"<<" "<<integer<<" "<< decimal<<endl;
    }




    return 0;
};