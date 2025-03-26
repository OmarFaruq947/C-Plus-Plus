#include<bits/stdc++.h>
using namespace std;
int main(){
ios:: sync_with_stdio(false);
cin.tie(nullptr);

    int n;
    cin>> n ;

    int num1 = 0, num2 = 1, next=0;

    for (int i = 1; i <= n; i++)
    {
        if(i == 1){
            cout<< num1 <<" ";
            continue;
        }
        if (i==2)
        {
            cout<< num2 <<" ";
            continue; 
        }
        next = num1 + num2;
        num1 = num2;
        num2 = next;

        cout<< next <<" ";
    }
    

    return 0;
};