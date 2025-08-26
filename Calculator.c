#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("====== Simple Calculator ======\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("================================\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Result: %.2f + %.2f = %.2f\n", a, b, result);
            break;
        case 2:
            result = a - b;
            printf("Result: %.2f - %.2f = %.2f\n", a, b, result);
            break;
        case 3:
            result = a * b;
            printf("Result: %.2f * %.2f = %.2f\n", a, b, result);
            break;
        case 4:
            if (b != 0) {
                result = a / b;
                printf("Result: %.2f / %.2f = %.2f\n", a, b, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select a number between 1 and 4.\n");
    }

    return 0;
} 
