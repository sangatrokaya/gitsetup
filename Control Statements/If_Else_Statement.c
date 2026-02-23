/* C program to check whether a given positive integer is odd or even. */


// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     int num;
//     printf("Enter a positive number: ");
//     scanf("%d", &num);

//     if(num % 2 == 0)
//     {
//         printf("%d is EVEN.", num);
//     }
//     else
//     {
//         printf("%d is ODD.", num);
//     }

//     return 0;
// }




/* C program to find largest of two numbers. */

// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     float num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%f%f", &num1, &num2);

//     if(num1>num2)
//     {
//         printf("%f is the largest number.", num1);
//     }
//     else
//     {
//         printf("%f is the largest number.", num2);
//     }

//     return 0;
// }




/* C program to check whether a given character is ‘r’ or not. */

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch == 'r')
    {
        printf("Given character is 'r'.");
    }
    else
    {
        printf("Given character is not 'r'.");
    }

    return 0;
}