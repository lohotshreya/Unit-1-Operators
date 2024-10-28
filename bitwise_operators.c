#include <stdio.h>    // Standard input-output library

int main() {
    int num1, num2;   // Declare integer variables for inputs
    int and, or, xor, not, left_shift, right_shift; // Variables to store bitwise operation results

    printf("Enter first number: ");
    scanf("%d", &num1);   // Read first integer input and store in num1

    printf("Enter second number: ");
    scanf("%d", &num2);   // Read second integer input and store in num2

    // Perform bitwise operations
    and = num1 & num2;     // Bitwise AND
    or = num1 | num2;      // Bitwise OR
    xor = num1 ^ num2;     // Bitwise XOR
    not = ~num1;          // Bitwise NOT on num1
    left_shift = num1 << 1;       // Left shift num1 by 1 bit
    right_shift = num1 >> 1;      // Right shift num1 by 1 bit

    // Display results
    printf("Bitwise AND of %d and %d: %d\n", num1, num2, and);
    printf("Bitwise OR of %d and %d: %d\n", num1, num2, or);
    printf("Bitwise XOR of %d and %d: %d\n", num1, num2, xor);
    printf("Bitwise NOT of %d: %d\n", num1, not);
    printf("Left shift of %d by 1: %d\n", num1, left_shift);
    printf("Right shift of %d by 1: %d\n", num1, right_shift);

    return 0;  // End program successfully
}