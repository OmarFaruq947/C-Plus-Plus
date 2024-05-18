#include <iostream> // Include the necessary header for cout
/**
this is my first c++ code
*/

int main(){
    bool GetResult;
    int x, y, z;
    x = 5;
    y = 10;
    z = 15;
    GetResult = x > y;
    cout << "Result of GetResult = X>Y : " << GetResult << endl;

    GetResult = y < z;
    cout << "Result of GetResult = Y<Z : " << GetResult << endl;

    GetResult = x + z - y; // Corrected the assignment
    cout << "Result of GetResult = X+Z-Y : " << GetResult << endl;

    x = x + z - y; // Updated x with the new value
    cout << "Result of x = X+Z-Y : " << x << endl; // Displaying the new value of x
    cout << "omar faruq"; // Added a newline character for better formatting
    return 0; // Added return 0 to signify successful execution
}

