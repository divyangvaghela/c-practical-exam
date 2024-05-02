// creat a c program to find the largest element in 1D array

#include <stdio.h>

int main() {
    int arr[10] = {3, 5, 2, 7, 8, 1, 9, 4, 6, 10};
    int max = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element in the array is: %d", max);

    return 0;
}
Output :-

The largest element in the array is: 10

=== Code Execution Successful ===
