#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int roll;
    int age;
    double gpa;
    student(int roll, int age, double gpa)
    {
        this->roll = roll;
        (*this).age = age;
        this->gpa = gpa;
    }
};

//  this->   and  (*this).   are same

int main()
{
    student omar(101, 25, 3.05);
    student faruq(101, 30, 3.05);

    cout << omar.roll << " -- " << omar.age << " -- " << omar.gpa << endl;
    cout << faruq.roll << " -- " << faruq.age << " -- " << faruq.gpa << endl;

    return 0;
}