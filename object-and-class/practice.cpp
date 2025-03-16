#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int age;

    // constructor
    Student(const char* name, int age){
        strcpy(this->name, name);
        this->age = age;
    };
};

Student* myFunc(){
    Student* faruq = new Student ("faruq", 50);
    return faruq;
};

int main(){
    Student *ans = myFun();
    cout<< ans->name << " "<< ans->age <<  endl;
    delete ans
    return 0;
};