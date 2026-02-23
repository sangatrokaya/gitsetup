/* C program to check whether a given number is odd or even using switch statement */

// #include<stdio.h>

// int main()
// {
//     int num, rem;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     rem = num % 2;

//     switch (rem)
//     {
//         case 1: printf("%d is ODD number.", num);
//         break;
//         default: printf("%d is EVEN number.", num);
//         break;
//     }

//     return 0;
// }



/* C program to implement simple calculator using switch statement */

// #include<stdio.h>

// int main()
// {
//     float a, b, result;
//     char op;
//     printf("******Available Operations*******\n");
//     printf("+ for Addition.\n");
//     printf("- for Subtraction.\n");
//     printf("* for Multiplication.\n");
//     printf("/ for Division.\n");
//     printf("Which Operation?\n");
//     scanf("%c", &op);

//     switch(op)
//     {
//         case '+': 
//         printf("Enter two numbers: ");
//         scanf("%f%f", &a, &b);
//         result = a + b;
//         printf("%0.2f + %0.2f = %0.2f", a, b, result);
//         break;

//         case '-':
//         printf("Enter two numbers: ");
//         scanf("%f%f", &a, &b);
//         result = a - b;
//         printf("%0.2f - %0.2f = %0.2f", a, b, result);
//         break;

//         case '*':
//         printf("Enter two numbers: ");
//         scanf("%f%f", &a, &b);
//         result = a * b;
//         printf("%0.2f * %0.2f = %0.2f", a, b, result);
//         break;

//         case '/':
//         printf("Enter two numbers: ");
//         scanf("%f%f", &a, &b);
//         result = a / b;
//         printf("%0.2f / %0.2f = %0.2f", a, b, result);
//         break;

//         default:
//         printf("Invalid Operation!");
//         break;
//     }

//     return 0;
// }