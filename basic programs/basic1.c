// 1. area and circumference of circle

/* #include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1415

int main()
{
    float r;
    float area, circumference;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);

    area = PI * pow(r, 2);
    circumference = 2 * PI * r;

    printf("The area of cricle is %0.2f\n", area);
    printf("The circumference of cricle is %0.2f", circumference);

    getch();


    return 0;
}
 */


// 2. swapping any 2 numbers

/* #include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, temp;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d and b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d and b = %d", a, b);

    getch();
    return 0;
    
} */


// 3. find the sum of n terms of fibonacci series

/* #include<stdio.h>
#include<conio.h>

int main()
{
    int a = 0, b = 1;
    int n, i, temp, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        sum = sum + a;
        temp = a;
        a = b;
        b = temp + a;
    }
    printf("The sum of n terms of fibonacci series is %d.", sum);

    getch();
    return 0;
} */


/* Global Variables */

// #include<stdio.h>
// #include<conio.h>

// int count; /* count is global variable */

// void func1();
// void func2();

// void main() {
//     count = 100;
//     func1();
//     getch();
// }

// void func1() {
//     int temp;
//     temp = count;
//     func2();
//     printf("count is %d.", count);
// }

// void func2() {
//     int count = 50;
//     printf("value of count: %d \n", count);
// }


/* Formal Parameters */ 

// #include<stdio.h>
// #include<conio.h>
 
// // Function declaration with formal parameters
// void add (int a, int b) {
//     int sum = a + b;
//     printf("sum: %d", sum);
// }

// int main() {
//     int num1 = 5, num2 = 10;
//     add(num1, num2); /* Function call with actual parameters */
//     return 0;
// }


/* sample program to illustrate each data types in C */

// #include<stdio.h>
// #include<conio.h>

// int main() {
//     int sum = 100;
//     float money = 100.21;
//     char letter = 'A';
//     double pi = 2.01E6;

//     printf("Value of sum = %d \n", sum);
//     printf("Value of money = %f \n", money);
//     printf("Value of letter = %c \n", letter);
//     printf("Value of pi = %e \n", pi);

//     return 0;

//     getch(); /* getch holds the value in the console */

// }