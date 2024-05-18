#include <iostream>
using namespace std;

void swapValue(int &x,int &y){
/* " & " new addition of c++ . this is called referencing operator.
--> this operator using for creating pointer referencing.
 */
int temp;
temp = x;
x=y;
y=temp;
}

int main(){
int x (5);
int y (10);
swapValue(x,y);
cout<<"X="<<x<<"Y="<<y<<endl;
}
