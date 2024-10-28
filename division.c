#include <stdio.h>    // Preprocessor directive for standard I/O

int main() {
    int num1, num2;         // Variable declarations for input
    float quotient;         // Variable for storing result as a float for precision

    printf("Enter dividend (first number): "); // Prompt user for the dividend
    scanf("%d", &num1);                         // Read integer input and store in num1

    printf("Enter divisor (second number): ");  // Prompt user for the divisor
    scanf("%d", &num2);                         // Read integer input and store in num2

    if (num2 != 0) {                            // Check if divisor is not zero
        quotient = (float)num1 / num2;          // Cast num1 to float for precise division
        printf("Quotient: %.2f\n", quotient);   // Output the quotient up to 2 decimal places
    } else {
        printf("Error: Division by zero is not allowed.\n"); // Error message for zero divisor
    }

    return 0;                                  
}