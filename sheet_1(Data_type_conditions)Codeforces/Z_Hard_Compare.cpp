#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    long long int A,B,C,D; cin>> A>>B>>C>>D ;
    // long long result1 = pow(A, B);
    // long long result2 = pow(C, D);


    double logAB = B * log(A);
    double logCD = D * log(C);
   

    if(logAB < logCD) cout<< "NO" <<endl;
    else if(logAB > logCD) cout<< "YES" <<endl;
    else if(logAB == logCD) cout<< "NO" <<endl;

    return 0;
};