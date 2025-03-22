#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    long long int n;
    cin>> n ;
    int count =0;

    if(n<=1){
        cout<< "NO" <<endl;
        return 0;
    }
    if(n==2) {
        cout<< "YES" <<endl; 
        return 0;
    }
    if(n % 2 == 0) {
        cout<< "NO" <<endl;
        return 0;
    };

    for (int i = 3; i <= sqrt(n); i+=2)
    {
        if(n % i ==0){
            cout<< "NO" <<endl;
            return 0;
        }
    }
    cout<< "YES" <<endl;
    return 0;
};
