/* print a below pattern using nested for loop in c language

1
4 4
9 9 9
16 16 16 16
25 25 25 25 25

*/

#include <stdio.h>

int main() {
    int n, r, c, a = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (r = 1; r <= n; r++) {
        for (c = 1; c <= r; c++) {
            printf("%d ", a * a);
        }
        a++;
        printf("\n");
    }
    return 0;
}

output :

Enter number of rows: 5
1 
4 4 
9 9 9 
16 16 16 16 
25 25 25 25 25 


=== Code Execution Successful ===
