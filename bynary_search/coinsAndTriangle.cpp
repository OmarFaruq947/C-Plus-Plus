#include<bits/stdc++.h>
using namespace std;


int sum(int h){
    return (h*(h+1)/2);
}



int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    long long int Q;
    cin>> Q ; // test case

    while (Q--){
        int N ; cin>> N ; // number of coin
        int h = 1; // height

     while (sum(h) <= N)
     {
        h++;
     }
     cout<< h-1 <<"\n";

    }

    return 0;
};



