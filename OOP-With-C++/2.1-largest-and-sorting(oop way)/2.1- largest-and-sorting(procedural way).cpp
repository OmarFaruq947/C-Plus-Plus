#include <iostream>
using namespace std;

class SortedLargest {
private:
    int i, j, temp, getLarge, a[5];
public:
    /* Class Constructor */
    SortedLargest() {
        cout << "Enter five integers (press ENTER key):\n";
        for (i = 0; i < 5; i++) {
            cin >> a[i];
        }
        GetSortedArray();
        GetLargestValue();
    }

private:
    /* Function to sort the array */
    void GetSortedArray() {
        for (i = 0; i < 5; i++) {
            for (j = i + 1; j < 5; j++) {
                if (a[i] < a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }

    /* Function to get the largest value */
    void GetLargestValue() {
        getLarge = a[0];
        for (i = 1; i < 5; i++) {
            if (a[i] > getLarge)
                getLarge = a[i];
        }
        cout << "\n\nThe Largest Value is:\n" << getLarge << endl;
    }
};

int main() {
    SortedLargest SL;
    return 0;
}
