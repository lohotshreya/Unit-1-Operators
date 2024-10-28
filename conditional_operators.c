#include <stdio.h>  // Standard input-output library

int main() {
    int num1, num2, max, min;   // Declare variables for numbers, max, and min

    printf("Enter first number: ");
    scanf("%d", &num1);         // Read first integer input and store in num1

    printf("Enter second number: ");
    scanf("%d", &num2);         // Read second integer input and store in num2

    // Find the maximum using a conditional operator
    max = (num1 > num2) ? num1 : num2;

    // Find the minimum using a conditional operator
    min = (num1 < num2) ? num1 : num2;

    printf("Maximum of %d and %d is: %d\n", num1, num2, max);
    printf("Minimum of %d and %d is: %d\n", num1, num2, min);

    return 0;                   // End the program with success status
}