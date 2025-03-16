#include<bits/stdc++.h>
using namespace std;
int main(){

    int size_of_arr, test_case;
    cin>> size_of_arr>> test_case;
    int arr[size_of_arr];

    for (int i = 0; i < size_of_arr; i++)
    {
        cin>> arr[i];
    }
    int pre[size_of_arr];

    pre[0] = arr[0];

    for (int i = 1; i < size_of_arr; i++)
    {
        pre[i] = arr[i] + pre[i-1];
    }
     
  while (test_case--)
  {
    int LL, UL;
    cin>> LL>>UL ;
    LL--;
    UL--;

    int sum ;

    if(LL == 0) sum = pre[UL];
    else sum = pre[UL]-pre[LL-1];

    cout<< sum <<endl;
  }
  
    
    
    



    


    return 0;
};