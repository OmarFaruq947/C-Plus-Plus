#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,q;   // array size & query no.
    cin>> n >> q;
    int arr[n]; // array

    for (int i = 0; i < n; i++)
    {
        cin>> arr[i] ;  // array input
    }

    sort(arr, arr+n);  // array sort   // ....................................................O(n log n)

    while (q--){       // ................................................................... O(n log n)
        int x;
        cin>> x ;   // searching value

        int L = 0, R = n-1;

        bool flag = false;

        // binary search
        while (L<=R){ 
            int mid_index = (L+R)/2;    // mid value count
            if(arr[mid_index] == x){
            flag=true;
            break;
        }

        if(x > arr[mid_index]) L=mid_index + 1;   //  right side shift
        else R=mid_index - 1;   // left side shift
    }
    if(flag) cout<< "found" <<endl;
    else cout<< "not found" <<endl;
    }

    return 0;
};






//.............................................


int search_insert_position(int arr[], int n, int k) {
    int left = 0, right = n - 1;
    int flag = false; 

    // Binary search
    while (left <= right) {
        int mid_val = (left + right) / 2;
        if (arr[mid_val] == k) {
            flag = true; 
            return mid_val;
        } else if (k > arr[mid_val]) {
            left = mid_val + 1;
        } else {
            right = mid_val - 1;
        }
    }

    // If k is not found, insert it into the array
    if (!flag) {
        // Shift elements to the right to make space for k
        for (int i = n - 1; i >= left; i--) {
            arr[i + 1] = arr[i];
        }
        arr[left] = k; // Insert k at the correct position
        n++; // Increase the size of the array (not reflected in the original array outside the function)

        // Return the position where k is inserted
        return left;
    }

    //return -1; // This line will never be reached, just to avoid compiler warnings
}