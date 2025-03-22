#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    string N; cin>> N ;

    string reversedN = N;
    reverse(reversedN.begin(), reversedN.end());
    
    reversedN.erase(0, reversedN.find_first_not_of('0'));

    if(reversedN.empty()){
        reversedN = "0";
    }

    cout<< reversedN <<endl;
    if(N == reversedN) cout<< "YES" <<endl;
    else cout<< "NO" <<endl;
    

    return 0;
};