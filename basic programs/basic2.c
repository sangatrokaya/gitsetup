/* 
C program to calculate surface area of cone.
A = πr ( r + √(r2 + h2) )
*/

/* #include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1415

int main()
{
    float r, h, A;

    printf("Enter the radius of base circle: ");
    scanf(" %f", &r);
    printf("Enter the perpendicular height of cone: ");
    scanf("%f", &h);

    A = PI * r * (r + sqrt(pow(r, 2) + pow(h, 2)));

    printf("Surface area of cone = %0.2f", A);

    getch();
    return 0;

} */


/* 
C program to calculate Equated Monthly Installment(EMI)
EMI = p * r * (1+r)^n/((1+r)^n-1)
Where:
p = Principal or Loan Amount
r = Interest Rate Per Month
n = Number of monthly installments

If the interest rate per annum is R% then interest rate per month is calculated using:
Monthly Interest Rate (r) = R/(12*100)
 */

/* #include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float p, R, r, EMI;
    int n;

    printf("Enter the Loan Amount: ");
    scanf("%f", &p);
    printf("Enter Interest Rate per Annum: ");
    scanf("%f", &R);
    printf("Enter the number of months: ");
    scanf("%d", &n);

    r = R / (12 * 100);

    EMI = p * r * (pow(1 + r, n) / (pow(1 + r, n)-1));

    printf("The required EMI is %0.4f", EMI);

    getch();
    return 0;

} */


/* 
WAP to find the square root, natural log, log base 10 and Exponential value of a number given by the user.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float n, SqRt, NatLg, LgB10, Exp;

    printf("Enter the number: ");
    scanf("%f", &n);

    SqRt = sqrt(n);
    NatLg = log(n);
    LgB10 = log10(n);
    Exp = exp(n);

    printf("Square root of %f is %0.2f \n", n, SqRt);
    printf("Natural log of %f is %0.2f\n", n, NatLg);
    printf("Log base 10 of %f is %0.2f \n", n, LgB10);
    printf("Exponential value of %f is %0.2f", n, Exp);

    getch();
    return 0;

}