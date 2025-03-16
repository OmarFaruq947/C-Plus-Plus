#include<bits/stdc++.h>
using namespace std;
int main(){

    int N;
    cin>> N ;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>> arr[i] ;
    }
    
    int prefix_arr[N];
    prefix_arr[0] = arr[0];

    for (int i = 1; i < N; i++)
    {
        prefix_arr[i] = arr[i] + prefix_arr[i-1];
    }
    
    for (int i = 0; i < N; i++)
    {
        cout<< prefix_arr[i] <<" ";
    }


   

    return 0;
};