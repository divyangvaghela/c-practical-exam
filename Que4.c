// write a c program to find the square of each element of an 1D array using pointer

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int i;

    for(i = 0; i < 5; i++) {
        *ptr = *ptr * *ptr;
        ptr++;
    }

    printf("The squares of the elements of the array are: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

Output :

The squares of the elements of the array are: 1 4 9 16 25 

=== Code Execution Successful ===
