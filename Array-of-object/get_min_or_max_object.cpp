#include<bits/stdc++.h>
using namespace std;

class Student {
    public:

string name;
int roll;
int murks;

};
int main(){
    int n;
    cin >> n ;

    Student *arr = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >>arr[i].roll>> arr[i].murks;
    }

    //int mn = INT_MAX; // only one filed finding {1}

    // Student mn ;   // object finding based on murks {2}
   // mn.murks = INT_MAX;  // object finding based on murks {2}

    // Student mx;  {3}
    // mx.murks = INT_MIN; {3}

    for (int i = 0; i < n; i++)
    {
        // if(arr[i].murks < mn) mn=arr[i].murks; {1}
        // if (arr[i].murks < mn.murks) mn=arr[i]; {2}

        // if(arr[i].murks > mx.murks) mx = arr[i];   {3}
    }
    // cout << "minimum murks: "<< mn.name<<" "<< mn.roll<<" "<< mn.murks <<endl;  {1,2}
    // cout << "maximum murks: "<< mx.name<<" "<< mx.roll<<" "<< mx.murks <<endl;  {3}

return 0;
}