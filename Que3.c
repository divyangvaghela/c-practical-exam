/* write a c program that defines a function to reverse a string without using any library function */

#include <stdio.h>

void reverseString(char* str) {
    int length = 0;
    char* start = str;
    char temp;

    while (*str != '\0') {
        length++;
        str++;
    }

    for (int i = 0; i < length / 2; i++) {
        temp = *(start + i);
        *(start + i) = *(start + length - 1 - i);
        *(start + length - 1 - i) = temp;
    }
}

int main() {
    char inputString[] = "Hello, World!";
    
    printf("Original string: %s\n", inputString);
    reverseString(inputString);
    printf("Reversed string: %s\n", inputString);
    
    return 0;
}

Output :

Original string: Hello, World!
Reversed string: !dlroW ,olleH


=== Code Execution Successful ===
