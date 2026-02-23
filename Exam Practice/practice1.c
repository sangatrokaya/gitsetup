/*
Check armstrong or not.
Hint: 1634 = 1^4 + 6^4 + 3^4 + 4^4 = 1634
*/

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>

// int main()
// {
//     int num, originalNumber, n = 0, result = 0, remainder;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     originalNumber = num;

//     // Count number of digits (n)
//     while (originalNumber != 0) {
//         originalNumber = originalNumber / 10;
//         n = n + 1;
//     }

//     originalNumber = num;

//     // nth power of each digit
//     while (originalNumber != 0) {
//         remainder = originalNumber % 10;
//         result = result + pow(remainder, n);
//         originalNumber = originalNumber / 10;
//     }

//     if (result == num) {
//         printf("The %d is Armstrong", num);
//     } else {
//         printf("The %d is not Armstrong", num);
//     }

//     return 0;
// }