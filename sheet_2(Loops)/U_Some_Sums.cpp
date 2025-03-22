#include<bits/stdc++.h>
using namespace std;


int isSomeDigit(int num){
   return num%2 ==0;
}




int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    int n; cin>> n ;
    long long int a,b; 
    cin>> a>>b;

    long long int sum=0; 
    for (int i = 1 ; i <=n; i++)
    {
        cout<< isSomeDigit(i) <<endl;
    }

    


    return 0;
};