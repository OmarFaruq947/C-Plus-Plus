#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    int phone;
    Person(string name, int age, int phone){
        this->name=name;
        this->age=age;
        this->phone=phone;
    }
    void func(){
        cout << name<<"- "<<age <<endl;
    }
    int number(){
        return phone;
    }
};
int main(){

Person omar ("md.omar fruq", 30, 01752);
omar.func();
cout << omar.number() <<endl;




return 0;
}