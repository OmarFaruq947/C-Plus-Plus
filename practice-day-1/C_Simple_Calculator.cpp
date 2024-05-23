#include<iostream>
using namespace std;

int main(){

long long int X, Y;
cin >> X >> Y;

if (1<=X<=100000 & 1<=Y<=100000)
{
cout << X << " + " << Y <<" = " << (X + Y) << endl;
cout << X << " * " << Y <<" = " << (X * Y) << endl;
cout << X << " - " << Y <<" = " << (X - Y) << endl;
}

return 0;
}