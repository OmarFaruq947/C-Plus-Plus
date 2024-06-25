#include <iostream.h>

int x; // global variable x

void changeX(void)
{
    x = 20; // value assigned to the global x
}

int main(void)
{
    int x; // local variable
    x = 50; // value assigned to the local x
    changeX(); // calling changeX which changes the global x
    cout<<"Value of x is:"<< x; // print the value of local x
    return 0;
}
