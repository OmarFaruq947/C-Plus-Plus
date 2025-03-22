#include<bits/stdc++.h>
using namespace std;


long long int fact(long long int num){

    if(num ==0) return 1;

    long long int ans = fact(num-1);
    return ans*num;
}


int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);
    int q; cin>> q ;

    while (q--)
    {
        long long int num;
        cin>> num ;
        long long int answer = fact(num);
        cout<< answer <<endl;
    }
    
    return 0;
};








