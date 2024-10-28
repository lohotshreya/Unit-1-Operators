#include <stdio.h>    // Preprocessor directive for standard I/O

int main() {
    int num1, num2, difference;     // Variable declarations

    printf("Enter first number: "); // Prompt user for input
    scanf("%d", &num1);             // Read integer input and store in num1

    printf("Enter second number: "); // Prompt user for input
    scanf("%d", &num2);              // Read integer input and store in num2

    difference = num1 - num2;        // Calculate difference between num1 and num2

    printf("Difference: %d\n", difference); // Output the difference
    return 0;                         // End the program with success status
}