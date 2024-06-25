#include <stdio.h>

/* Function to sort the array */
void GetSortedArray(int a[]) {
    int i, j, temp;
    for (i = 0; i < 5; i++) {  // bubble sort algorithm , time complexity is O(25)=O(1)
        for (j = i + 1; j < 5; j++) {
            if (a[i] > a[j]) {  // ascending , "<" descending
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    /* Print the sorted array */
    printf("Sorted Array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}




/* Function to get the largest value */
int GetLargestValue(int a[]) {
    int i, getLarge;
    getLarge = a[0];
    for (i = 0; i < 5; i++) {
        if (a[i] > getLarge) {
            getLarge = a[i];
        }
    }
    return getLarge;
}


int main(void) {
    int i, a[5];
    printf("Enter five integers (press enter after each value):\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Entered Array: ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n\nAfter Sorting:\n");
    GetSortedArray(a);
    printf("\nThe Largest Value is: %d\n", GetLargestValue(a));

    return 0;
}
