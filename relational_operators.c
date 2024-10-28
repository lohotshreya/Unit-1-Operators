#include <stdio.h>    // Preprocessor directive for standard I/O

int main() {
    int num1, num2;             // Declare integer variables for inputs

    printf("Enter first number: "); // Prompt user for the first number
    scanf("%d", &num1);             // Read integer input and store in num1

    printf("Enter second number: "); // Prompt user for the second number
    scanf("%d", &num2);              // Read integer input and store in num2

    // Relational operations and results display
    printf("Results of relational operations:\n");
    
    if (num1 == num2) {
        printf("%d is equal to %d\n", num1, num2);  // Checks if numbers are equal
    } else {
        printf("%d is not equal to %d\n", num1, num2); // If not equal, output this
    }

    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2); // Checks if num1 is greater than num2
    }

    if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);    // Checks if num1 is less than num2
    }

    if (num1 >= num2) {
        printf("%d is greater than or equal to %d\n", num1, num2); // Checks if num1 is greater or equal to num2
    }

    if (num1 <= num2) {
        printf("%d is less than or equal to %d\n", num1, num2);     // Checks if num1 is less or equal to num2
    }

    return 0;                    // End the program with success status
}