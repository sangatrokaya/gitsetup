// INTERMEDIATE LEVEL PROGRAMS

/* 
1. Write a program to swap two numbers without using a temporary variable.
 */

/* #include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("******************************************************\n");

    printf("Before swapping: a = %f and b = %f\n", num1, num2);

    // num1 = num1 + num2;
    // num2 = num1 - num2;
    // num1 = num1 - num2;

    // num1 = num1 * num2;
    // num2 = num1 / num2;
    // num1 = num1 / num2;

    // Using XOR
    num1 = num1 ^ num2;  // a becomes 15 (binary XOR of 5 and 10)
    num2 = num1 ^ num2;  // b becomes 5 (binary XOR of 15 and 10)
    num1 = num1 ^ num2;  // a becomes 10 (binary XOR of 15 and 5)

    printf("After swapping: a = %f and b = %f", num1, num2);

    return 0;
} */


/* 
2. Write a program to compute the roots of a quadratic equation using the formula:
    Roots = (-b +- sqrt(b^2 - 4ac)) / 2a
 */

/* #include<stdio.h>
#include<math.h>
#include<complex.h>

int main()
{
    float a, b, c, root1, root2, realPart, imgPart, disc;
    printf("Enter the coefficient a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    disc = pow(b, 2) - 4*a*c;

    // codition for real and different roots
    if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);

        printf("root1 = %.2f and root2 = %.2f", root1, root2);
    }

    // condition for real and equal roots
    else if (disc == 0) {
        root1 = root2 = -b / (2 * a);

        printf("root1 = root2 = %.2f", root1);
    }

    else {
        complex realPart = -b / (2 * a);
        complex imgPart = sqrt(disc) / (2 * a);

        printf("root1 = %.2f + %.2fi and root2 = %.2f - %.2fi", realPart, imgPart, realPart, imgPart);
    }

    return 0;
}
 */

/* ALTERNATIVE WAY */

/* #include <stdio.h>
#include <math.h>
#include <complex.h>

int main() {
    double a = 2.4, b = 4, c = 5.6;
    double discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Root1 = %.2f\nRoot2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0){
         double root1 = -b / (2 * a);
         double root2 = -b / (2 * a);

        printf("root1 = root2 = %.2f", root1);
    }
     else {
        double complex root1 = (-b + csqrt(discriminant)) / (2*a);
        double complex root2 = (-b - csqrt(discriminant)) / (2*a);
        printf("Root1 = %.2f + %.2fi\n", creal(root1), cimag(root1));
        printf("Root2 = %.2f - %.2fi\n", creal(root2), cimag(root2));
    }

    return 0;
} */


/* 
3. Write a program to evaluate the following expression:
    y=(a+b)∗(c/d)−e%f
 */

/* #include<stdio.h>

int main()
{
    float y, a, b, c, d;
    int e, f;
    printf("Enter the value of a, b, c, d, e and f respectively: ");
    scanf("%f %f %f %f %d %d", &a, &b, &c, &d, &e, &f);

    y = (a + b) * (c / d) - (e % f);

    printf("The above expression yields the value %f.", y);

    return 0;
} */


/* 
4. Write a program to check if a number is a power of 2 using bitwise operators.
 */

/* #include<stdio.h>

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0 && (n & (n -1))== 0){
        printf("The number you entered is power of 2.");
    }
    else {
        printf("The number you entered is not power of 2.");
    }

    return 0;
}
 */


/* 
5. Write a program to reverse a three-digit number using arithmetic operators.
 */

/* #include<stdio.h>

int main()
{
    int num, revNum = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);

    for(int i = 1; i<=3; i++){
        if (num > 0){
        revNum = revNum * 10 + num % 10;
        num = num / 10;

        }
    }
    printf("Reverse of Number: %d", revNum);
    return 0;
} */

// ALTERNATIVELY

/* #include <stdio.h>

int main() {
    int num, hundreds, tens, ones, reversed_num;

    // Input a three-digit number
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Extract digits using arithmetic operators
    hundreds = num / 100;           // Get the hundreds place
    tens = (num % 100) / 10;        // Get the tens place
    ones = num % 10;                // Get the ones place

    // Reverse the number
    reversed_num = ones * 100 + tens * 10 + hundreds;

    // Output the reversed number
    printf("Reversed number: %d\n", reversed_num);

    return 0;
}
 */


/* 
6. Write a program to demonstrate the use of logical operators (&&, ||, !) with various conditions.
 */

/* #include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using && (logical AND)
    if (a < b && b < c){
        printf("Condition 'a < b && b < c' is TRUE.\n");
    }
    else {
        printf("Condition 'a < b && b < c' is FALSE.\n");
    }

    // Using || (Logical OR)
    if (a > b || b < c){
        printf("Condition 'a > b || b < c' is TRUE.\n");
    }
    else {
        printf("Condition 'a > b || b < c' is FALSE.\n");
    }

    // Using ! (Logical NOT)
    if (!(a > b)){
        printf("Condition '!(a > b)' is TRUE.\n");
    }
    else {
        printf("Condition '!(a > b)' is FALSE.\n");
    }

    // Combining all three logical operators
    if ((a < b && b < c) || !(c > a)){
        printf("Condition '(a < b && b < c) || !(c > a)' is TRUE.\n");
    }
    else {
        printf("Condition '(a < b && b < c) || !(c > a)' is FALSE.\n");
    }

    return 0;

}
 */


/* 
7. Write a program to convert temperature from Fahrenheit to Celsius using the formula:
    Celsius = 5/9 * (Fahrenheit -32)
 */

/* #include<stdio.h>

int main()
{
    float F, C;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &F);

    C = 5.0 / 9.0 * (F - 32);

    printf("The temperature in Celsius is %.2f.", C);

    return 0;

}
 */


