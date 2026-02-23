//  ADVANCED LEVEL

/* 
1. Write a program to calculate the result of the following expression without using the pow function:(Use a loop or recursion)
    x^n = x * x * ...* x (n times) 
*/

// Using Loop

/* #include<stdio.h>

int main()
{
    int x, n;
    long long result = 1; 

    printf("Enter the value of the base (x): ");
    scanf("%d", &x);
    printf("Enter the value of the exponent (n): ");
    scanf("%d", &n);

    // Check for negative exponent
    if (n < 0) {
        printf("Negative exponent is not supported in this implementation.");
        return 1;
    }

    // Calcualte x^n using a Loop
    for (int i = 1; i <= n; i++) {
        result *= x; // Multiply x by itself 
    }

    printf("%d raised to the power %d is %lld.", x, n, result);

    return 0;

    
}
 */

// Using Recursion

/* #include<stdio.h>

// Recursive function
long long power(int x, int n) {
    // Base case: x^0 = 1
    if (n == 0) {
        return 1;
    } 
    return x * power(x, n - 1); // Recursive case
}
{
int main()
    int x, n; 

    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (n):");
    scanf("%d", &n);

    long long result = power(x, n); // Call the recursive function
    printf("%d raised to the power %d is %lld.", x, n, result);

    return 0;
}
 */

/* 2. Write a program to demonstrate the use of bitwise operators (&, |, ^, ~, <<, >>) by performing bit manipulations on integers. */


/* #include<stdio.h>

int demonstrateBitwiseOperators() {
    int a , b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);

    // Bitwise AND (&) operation
    int andResult = a & b;
    printf("Bitwise AND (&): %d & %d = %d \n", a, b, andResult);

    // Bitwise OR (|) operation
    int orResult = a | b;
    printf("Bitwise OR (|): %d | %d = %d \n", a, b, orResult);

    // Bitwise XOR (^) operation
    int xorResult = a ^ b;
    printf("Bitwise XOR (^): %d ^ %d = %d \n", a, b, xorResult);

    // Bitwise Complement (~) operation
    int compResult = ~a;
    printf("Bitwise XOR (~): ~%d = %d \n", a, compResult);
    
    // Bitwise Shift Right (>>) operation
    int rShiftResult = a >> 2;
    printf("Bitwise Shift Right (>>): %d >> 2 = %d \n", a, rShiftResult);

    // Bitwise Shift Left (<<) operation
    int lShiftResult = a << 2;
    printf("Bitwise Shift Left (<<): %d << 2 = %d \n", a, lShiftResult);
        


}

int main()
{
    demonstrateBitwiseOperators();
    return 0;
}
 */


// ALTERNATIVE WAY

/* 
#include<stdio.h>

// Function prototypes
   int bitwiseand(int a, int b);
   int bitwiseor(int a, int b);
   int bitwisexor(int a, int b);
   int bitwisenot(int a);
   int bitwiseshiftleft( int a);
   int bitwiseshiftright(int a);
    

int main()
{
    int a,b;
    printf("enter the value of a and b: ");
    scanf("%d %d",&a,&b);

    // Call and display results of bitwise operations
    int andResult = bitwiseand(a, b);
    printf("Bitwise AND: %d \n", andResult);

    int orResult = bitwiseor(a, b);
    printf("Bitwise OR: %d\n", orResult);

    int xorResult = bitwisexor(a , b);
    printf("Bitwise XOR: %d\n", xorResult);

    int notResult = bitwisenot(a);
    printf("Bitwise NOT of a: %d\n", notResult);

    int lShiftResult = bitwiseshiftleft(a);
    printf("Left Shift of a: %d\n", lShiftResult);

    int rShiftResult = bitwiseshiftright(a);
    printf("Right Shift of a: %d", rShiftResult);

    return 0;
}

// Function definitions
     int bitwiseand(int a, int b)
    {
        return a & b;
    }
    int bitwiseor(int a,int b)
    {
        return a | b;
    }
    int bitwisexor(int a,int b)
    {
        return a ^ b;

    }
    int bitwisenot(int a)
    {
        return ~a;

    }
    int bitwiseshiftleft(int a)
    {
        return a << 2;
    }
    int bitwiseshiftright(int a)
    {
        return a >> 2;
    }


 */



/* 3. Write a program to check if a given year is a leap year using logical operators. */
/* 
#include<stdio.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("Year %d is a Leap year.", year);
    } else {
        printf("Year %d is not a Leap year.", year);
    }

    return 0;
}
 */

// Using User-defined function

/* 
#include<stdio.h>

int leapYear()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("Year %d is a Leap year.", year);
    } else {
        printf("Year %d is not a Leap year.", year);
    }
}

int main()
{
    leapYear();
    return 0;
}
 */



/* 4. Write a program to find the GCD (Greatest Common Divisor) of two numbers using arithmetic operators.
Pseudocode: 
EuclideanAlgorithm(a, b):
    Step 1: If a < b, swap a and b to make a > b
    Step 2: While b ≠ 0:
                r = a % b
                a = b
                b = r
    Step 3: Return a (GCD).
 */

/* 
#include<stdio.h>

int main()
{
    int a, b, r, temp;

    printf("Enter the numbers: ");
    scanf("\t %d \t %d", &a, &b);

    // Ensure both numbers are positive
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // Swap to ensure denominator is less than numerator
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    // Loop until one number becomes zero
    while (b != 0) {
        // temp = b;
        // b = a % b; // Remainder
        // a = temp; 

        r = a % b;
        a = b;
        b = r;
    }

    printf("GCD(a, b) = %d", a);
    return 0;
}
 */



/* 5. Write a program to evaluate a mathematical expression entered as input, such as 3 + 5 * (2 - 8) using operator precedence. */





/* 6. Write a program to implement a simple calculator using a switch statement to handle different operations (+, -, *, /, %). */

/* 
#include<stdio.h>

int main()
{   
    char operator;
    double num1, num2, result;

    // Prompt user for input
    printf("Enter an operator (+, -, /, %):");
    scanf("%c", &operator);

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    switch(operator) {
        case '+':
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;
        case '-':
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;
    
        case '*':
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;
    
        case '/':
        if (num2 != 0){
            result = num1 / num2;
        } else {
            printf("Error! Division by zero is not allowed. \n");
            return 1;
        }
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        break;
    
        case '%':
        if ((int)num2 != 0){
            printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
        } else {
            printf("Error! Modulus by zero is not allowed.\n");
        }
        break;
        default:
        printf("Invalid operator!");
    }
    return 0;
}
 */


/* 7. Write a program to count the number of set bits (1s) in a binary representation of an integer using bitwise operators. */
/* 8. Write a program to solve the Tower of Hanoi problem, demonstrating recursion and the use of expressions. */


/* 9. Write a program to implement an algorithm that checks whether a number is prime using efficient modulus and logical operators. */

/*  
#include<stdio.h>
#include<math.h>

int main()
{
    int num, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0 || num <= 1){
        printf("Invalid request!");
        return 1;
    }
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0) {
            isPrime = 0;
            break;
        } 
    }

    if (isPrime)
        printf("%d is a Prime number.", num);
        else
        printf("%d is not a Prime number.", num);  

    return 0;
} */
 


/* 10. Write a program to implement a simple encryption-decryption algorithm using bitwise XOR. */



/* 10. C program that gives me the overall idea of operators precedence and associativity along with proper commenting of the process. */


#include<stdio.h>

int main()
{
    int a = 5, b = 10, c = 20;
    int result;

    // Demonstrating precedence and associativity in C
    // Operators with high precendence are evaluated first
    // If operators have the same precedence, associativity decides the evaluation order

    // Example 1: Multiplication has higher precedence than Addition
    result = a + b * c; // Equivalent to a + (b + c)
    printf("a + b * c = %d \n", result); // Expected output: 5 + (10 * 20) = 205

    // Example 2: Parenthese precedence
    result = (a + b) * c; // addition happens first due to parentheses
    printf("(a + b) * c = %d \n", result); // Expected output: (5 + 10) * 20 = 300

    // Example 3: Division and Multiplication have same precedence, so associativity is taken into consideration (Left --> Right)
    result = a * b / c; // Equivalent to (a * b) / c
    printf("a * b / c = %d \n", result); // Expected output: (5 * 10) / 20 = 2

    // Example 4: Associativity of Assignment operators (R --> L)
    int x ;
    int y;
    x = y = 100; // Equivalent to y = 100; x = y;
    printf("x = %d, y = %d \n", x, y);

    // Example 5: Relational and logical operators
    int condition = 

    return 0;
}

