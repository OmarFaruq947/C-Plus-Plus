#include<bits/stdc++.h>
using namespace std;


// class declare (template)
class student {
    public:
    char name[50];
    int roll;
    double cgpa;
};



int main(){

// class A,B, .... Z
student A, B;

// how to input
cin.getline(A.name, 50) >> A.roll >> A.cgpa;
getchar();
cin.getline(B.name, 50) >> B.roll >> B.cgpa;


// print
cout << A.cgpa<<" "<< A.name<<" "<< A.roll <<endl;
cout << B.cgpa<<" "<< B.name<<" "<< B.roll <<endl;

return 0;
}