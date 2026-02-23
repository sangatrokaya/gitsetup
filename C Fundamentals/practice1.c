/* #include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int num, count = 0, temp, rem, sum = 0, power;
    printf("Enter a positive number: ", num);
    scanf("%d", &num);

    temp = num;

    // count the digits in a number
    while(temp > 0)
    {
        temp /= 10;
        count++;
    }
    printf("The number of digits = %d", count);

    // reset temp
    temp = num;

    // armstrong calcn
    while (temp > 0){
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }


    
    printf("The altogether sum = %d", sum);

    if (sum == num) {
        printf("Number is an Armstrong number.");
    } else {
        printf("Not a armstrong number");
    }



    return 0;
}
 */




/*

****
****
****
****

*/

/* #include<stdio.h>
#include<conio.h>

int main ()
{
    int i, j;

    for (i =1; i <= 4; i++) {
        for(j = 1; j <= 4; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
} */



/* 

*
**
***
****
*****

*/

/* #include<stdio.h>
#include<conio.h>

int main() {

    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (i >= j) {
                printf("*");
            } else {
                printf(" ");
            }
           
        }
         printf("\n");
    } 

    return 0;
} */


/* 

    *
   ***
  *****
 *******
*********

*/

/* 
#include<stdio.h>
#include<conio.h>

int main () {
    int n = 5;

    for (int i = 1; i <= 5; i++) {
        for (int s = 1; s <= n - i; s++){
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
} */


/* 

1                   
12
123
1234   
12345

*/

/* #include<stdio.h>
#include<conio.h>

int main ()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j <= i) {
                printf("%d", j);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
} */


/* 

  *
 ***
*****
 ***
  *

*/


/* #include<stdio.h>
#include<conio.h>

int main () {
    int i, j, s, k, n = 3;
    for (i = 1; i <= n; i++) {
        for (s = 1; s <= n-i; s++) {
            printf(" ");
        }
        for (j = 1; j <= 2*i-1; j++) {
            printf("*");
        }

        printf("\n");
    }
    for (i = n-1; i >= 1; i--) {
        for (s = 1; s <= n-i; s++) {
            printf(" ");
        }
        for (j = 1; j <= 2*i-1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
} */


/* 
            1
        1   2   1
    1   2   3   2   1
1   2   3   4   3   2   1

*/

/* #include<stdio.h>
#include<conio.h>

int main() {
    int n = 8;
    //spaces
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n-i; s++) {
            printf(" ");
        }
        //1st part 
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        //2nd part 
        for(int k = i-1; k >= 1; k--){
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
 */

 
/*
swap two numbers without using an extra variable
*/

/* #include<stdio.h>

int main(){
    int x = a, y = b; 
    printf("Original: x = %d and y = %d \n", x , y);
    y = a;
    x =   

    printf("Swapped: x = %d and y = %d", x , y);
    return 0;
} */