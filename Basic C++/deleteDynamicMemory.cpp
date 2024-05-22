#include<bits/stdc++.h>
using namespace std;

int main(){
int *arr = new int[3];
int *b = new int[5];
for (int i = 0; i < 3; i++)
{
    cin >> arr[i] ;
    b[i]=arr[i];
}
delete[] arr;
arr = new int[5];
for (int i = 0; i < 3; i++)
{
    arr[i] = b[i];
}
delete[] b;
arr[3] = 40;
arr[4] = 50;
for (int i = 0; i < 5; i++)
{
    cout << arr[i] <<" ";
}
return 0;
}
//delete arr; // only first element deleted
//delete[] arr; // Array (all element) deleted