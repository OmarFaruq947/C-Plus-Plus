#include <iostream>
using namespace std;

// default arguments of c plus plus
void func(int x, float y=3.1416){
    cout<<"valid of X and Y are:"<<x<<","<<y<<endl;
}

int main() {
    func(5);
    func(10, 90);
    return 0;
}


/*
function advantiges of c++ .

1) function prototype
2) default arguments
*/
