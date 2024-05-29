#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int roll;
    int cls;
    double gpa;
    student(int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main(){


student* karim = new student(342, 10, 4.56);

cout << karim->cls<<" "<< karim->gpa<< endl;

return 0;
}