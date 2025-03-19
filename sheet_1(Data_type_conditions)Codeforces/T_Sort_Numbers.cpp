#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    long int A,B,C;
    cin>> A>> B>> C ;

    vector<long int> V;
    V.push_back(A);
    V.push_back(B);
    V.push_back(C);
    
    vector<long int> sortedV = V;
    sort(sortedV.begin(), sortedV.end());

    // sort value
    for (int val : sortedV) cout<< val <<endl;
    
    cout<<endl;

    for (long int val:V) cout<< val <<endl;

    return 0;
};