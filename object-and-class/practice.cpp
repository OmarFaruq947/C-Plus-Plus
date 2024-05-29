#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int roll;
    int phone;
    student(int roll, int phone){
        this->roll=roll;
        this->phone=phone;
    }
};

 student* func()
{
    student faruq(101, 01);
    student *p = &faruq;
    return p;
}


int main(){

student *ans = func();
// cout<< ans.roll<<"  "<< ans.phone<< endl;

cout << ans->roll << " "<<ans->phone <<endl;

    return 0;
}
