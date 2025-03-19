#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    long int A,B;
    cin>> A >> B;

    if(A==0 & B==0){
        cout<< "NO" <<endl;
    }else if(abs(A-B)>1){
        cout<< "NO" <<endl;
    }
    else{
        cout<< "YES" <<endl;
    }


    return 0;
};