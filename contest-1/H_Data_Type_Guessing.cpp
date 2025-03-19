#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    long long int n,k,a;

    cin>> n>>k>>a;
    
    if((n*k) % a !=0){
        cout<< "double" <<endl;
    }else{
        long long int result = (n*k)/a;
        if(result >= -2147483648 && result <=2147483647 ){
            cout<< "int" <<endl;
        }else{
            cout<< "long long" <<endl;
        }
    }



    return 0;
};