#include <stdio.h>    // Preprocessor directive for standard I/O

int main() {
    int num1, num2;               // Declare integer variables for inputs

    printf("Enter first number: "); // Prompt user for the first number
    scanf("%d", &num1);             // Read integer input and store in num1

    printf("Enter second number: "); // Prompt user for the second number
    scanf("%d", &num2);              // Read integer input and store in num2

    printf("Results of logical operations:\n");

    if (num1 > 0 && num2 > 0) {
        printf("Both numbers are positive.\n");   // Checks if both numbers are positive
    } else {
        printf("At least one of the numbers is not positive.\n");
    }

    if (num1 < 0 || num2 < 0) {
        printf("At least one of the numbers is negative.\n"); // Checks if either number is negative
    } else {
        printf("Neither of the numbers is negative.\n");
    }

    if (!(num1 == num2)) {
        printf("The numbers are not equal.\n");  // Checks if numbers are not equal
    } else {
        printf("The numbers are equal.\n");
    }

    return 0;                    // End the program with success status
}