#include<stdio.h>
int main() 
{
    float num1, num2;
    float sum, sub, mul, div;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("The sum of two numbers is %0.2f \n", sum);
    printf("The difference of two numbers is %0.2f \n", sub);
    printf("The product of two numbers is %0.2f \n", mul);
    printf("The division of two numbers is %0.2f", div);

    return 0;
} 