#include <stdio.h>    // Preprocessor directive for standard I/O

int main() {
    int num1, num2, product;     // Variable declarations

    printf("Enter first number: "); // Prompt user for input
    scanf("%d", &num1);             // Read integer input and store in num1

    printf("Enter second number: "); // Prompt user for input
    scanf("%d", &num2);              // Read integer input and store in num2

    product = num1 * num2;           // Calculate product of num1 and num2

    printf("Product: %d\n", product); // Output the product
    return 0;                         // End the program with success status
}