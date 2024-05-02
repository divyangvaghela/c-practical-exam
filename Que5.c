/* 
develop a c program that define a structure representing a car ( with attribute like model , year and price)
list N number of car details using array of object
*/

#include <stdio.h>

// Define the structure representing a car
struct Car {
    char model[50];
    int year;
    float price;
};

int main() {
    int N;

    // Ask for the number of cars
    printf("Enter the number of cars: ");
    scanf("%d", &N);

    // Create an array of objects to store car details
    struct Car cars[N];

    // Input car details
    for (int i = 0; i < N; i++) {
        printf("\nEnter details for Car %d:\n", i + 1);
        printf("Enter model: ");
        scanf("%s", cars[i].model);
        printf("Enter year: ");
        scanf("%d", &cars[i].year);
        printf("Enter price: ");
        scanf("%f", &cars[i].price);
    }

    // Display car details
    printf("\nCar Details:\n");
    for (int i = 0; i < N; i++) {
        printf("Car %d: Model - %s, Year - %d, Price - $%.2f\n", i + 1, cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}

Output :

/tmp/l5tlgY7qDi.o
Enter the number of cars: 2

Enter details for Car 1:
Enter model: Jeep 
Enter year: 2018
Enter price: 55000

Enter details for Car 2:
Enter model: i20
Enter year: 2016
Enter price: 45000

Car Details:
Car 1: Model - Jeep, Year - 2018, Price - $55000.00
Car 2: Model - i20, Year - 2016, Price - $45000.00


=== Code Execution Successful ===
