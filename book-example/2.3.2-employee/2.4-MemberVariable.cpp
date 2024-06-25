#include<iostream>
#include<conio.h>
#include<chrono>
#include<ctime>

using namespace std;

class addition{
public:
    int a,b;
    int add(){
        return (a+b);
        }
};

int main(void){
addition SA;
SA.a=10;
SA.b =20;
cout<< "a+b="<<SA.add();

getch();
}
