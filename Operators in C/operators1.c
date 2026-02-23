// BASIC PROGRAMS
/* 
1. Write a program to:
Add, subtract, multiply, and divide two numbers.
Compute the remainder of two numbers using the modulus operator.
*/

/* #include<stdio.h>
#include<stdio.h>

int main()
{
    int  b;
    int add, sub, mul, div, rem;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    rem = a % b;

    printf("*******************************************************************************\n");
    printf("The addition of %d and %d is %d \n",  b, add);
    printf("The subtraction of %d and %d is %d \n",  b, sub);
    printf("The multiplication of %d and %d is %d \n",  b, mul);
    printf("The division of %d by %d is %d \n",  b, div);
    printf("The remainder of %d when divided by %d is %d",  b, rem);

    return 0;
} */



/* 
2. Write a program to swap two numbers using a temporary variable.
*/

/* #include<stdio.h>

int main()
{
    int  b, temp;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    printf("*************************************\n");
    printf("Before swapping: a = %d and b = %d\n",  b);
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d and b = %d",  b);

    return 0;

}
 */



/*
3. Write a program to check if a number is even or odd using the modulus operator.
*/

/* #include<stdio.h>

int main()
{
    int a;

    printf("Enter a random number: ");
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("Number is even.");
    }
    else {
        printf("Number is odd.");
    }

    return 0;
}
 */




/*
4. Write a program to find the maximum of two numbers using the conditional operator (?:).
*/

/* #include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);

    num1 > num2 ? printf("%d is Maximum number.", num1) : printf("%d is Maximum number.", num2);

    return 0;
}
 */


/* 
5. Write a program to demonstrate the use of increment (++) and decrement (--) operators.
*/

/* #include <stdio.h>

int main() {
    int a = 5, b = 5, c = 5, d = 5;

    printf("Initial values: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    // Post-increment
    printf("Post-increment: a++ = %d (value before increment), a becomes %d after operation\n", a++, a);

    // Pre-increment
    printf("Pre-increment: ++b = %d (value after increment)\n", ++b);

    // Post-decrement
    printf("Post-decrement: c-- = %d (value before decrement), c becomes %d after operation\n", c--, c);

    // Pre-decrement
    printf("Pre-decrement: --d = %d (value after decrement)\n", --d);

    return 0;
}
 */


/* 
6. Write a program to calculate the area of a rectangle using an expression.
 */

/* #include<stdio.h>

int main()
{
    float l, b;
    float area;

    printf("Enter the length of rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);

    area = l * b;

    printf("The area of rectangle is %0.2f.", area);

    return 0;
} */



/* 
7. Write a program to find the square and cube of a number using multiplication.
 */

/* #include<stdio.h>

int main()
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    printf("The square of a number is %0.2f.\n", num*num);
    printf("The cube of a number is %0.2f.", num*num*num);
    
    return 0;
} */

































