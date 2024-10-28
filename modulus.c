#include <stdio.h>   // Preprocessor directive for standard I/O

int main() {
    int num1, num2, remainder;    // Declare integer variables for inputs and result

    printf("Enter dividend (first number): "); // Prompt user for the dividend
    scanf("%d", &num1);                        // Read integer input for dividend

    printf("Enter divisor (second number): "); // Prompt user for the divisor
    scanf("%d", &num2);                        // Read integer input for divisor

    if (num2 != 0) {                           // Check if divisor is not zero
        remainder = num1 % num2;               // Calculate remainder using modulus operator
        printf("Remainder: %d\n", remainder);  // Output the remainder
    } else {
        printf("Error: Modulus by zero is not allowed.\n"); // Error for zero divisor
    }

    return 0;                                  
}