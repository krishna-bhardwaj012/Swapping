#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swapping without a temporary variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    // Display the swapped numbers
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}