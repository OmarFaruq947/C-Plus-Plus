#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n){

    if(n<=1){
        return false;
    }

    if(n==2) { 
        return true;
    }

    if(n % 2 == 0) {
        return false;
    };

    for (int i = 3; i <= sqrt(n); i+=2)
    {
        if(n % i ==0){
            return false;
        }
    }
    return true;
}


int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    long long int n;
    cin>> n ;

     for (int i = 2; i <=n; i++)
    {   
        if(isPrime(i)){
            cout<< i <<" ";
        }      
    }
    return 0;
};
