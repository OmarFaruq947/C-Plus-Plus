#include<bits/stdc++.h>
using namespace std;



int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    long long int n;
    cin>> n ;

     for (int i = 1; i <=n; i++)
    {   
        if(n % i == 0){
            cout<< i <<endl;
        }      
    }
    return 0;
};
