#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int rol;
    int marks;
};

int main(){

int n;
cin >> n ;

Student *arr = new Student [n]; // dynamic array
// int *arr = new int[n]; // normal dynamic array
// Student arr[n]; // static array 

for (int i = 0; i < n; i++)
{
    cin.ignore(); // enter ignore
    getline(cin, arr[i].name); // string input with space
    cin >> arr[i].rol>> arr[i].marks;
}

for (int i = 0; i < n; i++)
{   ;
    cout << arr[i].name<<" "<<arr[i].rol<<" "<< arr[i].marks<<endl;
}

return 0;
}