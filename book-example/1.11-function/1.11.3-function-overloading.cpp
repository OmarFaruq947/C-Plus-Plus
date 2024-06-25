/*
**what is overloaded function ??

answer: function name is same but there are work, function type, return type and parameter is different, this is called overloading function.
see the following example:
*/


#include<iostream>
using namespace std;

int addxy(int x, int y){
    return x+y;
}

float addxy(float x, float y){
    return x-y;

}

double addxy(double x, double y){
    return x*y;
}

double addxy(int x, double y){
    return x/y;
}

float addxy(int x, float y){
    return x*y;
}

float addxy(float x, double y){
    return x+y;
}


int main(void){
cout<<"int type function & X +Y ="<< addxy(5.1,5.123456789963258741)<<endl;
}

