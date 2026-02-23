// Menu-driven calculator using switch-case

#include<stdio.h>

int main() {
    int choice;
    float a, b;

    printf("1. Add 2. Subtract 3. Multiply 4. Divide\n");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    switch(choice) {
        case 1:
        printf("Result = %.2f", a + b);
        break;

        case 2:
        printf("Result = %.2f", a - b);
        break;

        case 3:
        printf("Result = %.2f", a * b);
        break;

        case 4:
        if (b != 0) {
            printf("Result = %.2f", a / b);
        } else {
            printf("Division by zero not possible!");
        }
        break;

        default:
        printf("Invalid choice!");
    }
}