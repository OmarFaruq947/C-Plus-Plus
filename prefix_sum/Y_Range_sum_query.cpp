#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr_size, numberOf_Q;
    cin>> arr_size>> numberOf_Q;

    int arr[arr_size];

    for (int i = 0; i < arr_size; i++) cin>> arr[i];

    int pre[arr_size];
    pre[0] = arr[0];
    
    for (int i = 1; i <arr_size ; i++) pre[i] = arr[i] + pre[i-1];

    while(numberOf_Q--){
        int Lower_limit ,Upper_limit;
        cin>> Lower_limit >>Upper_limit;
        Lower_limit--;
        Upper_limit--;
        int sum;

        if(Lower_limit==0) sum = pre[Upper_limit];
        else sum = pre[Upper_limit] - pre[Lower_limit-1];

        cout<< sum <<endl;
    }

    return 0;
};