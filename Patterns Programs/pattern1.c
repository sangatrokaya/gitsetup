// Print the following patterns:

/* Basic patterns: */

/* 
******
*/

/* #include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, n;
    printf("Enter the number of rows to print: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= (i+4); j++) {
            printf("*");
        }
    }
    getch();
    return 0;
} */


/* 
*****
*****
*****
*****
*****
 */
/* 
#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, n;
    printf("Enter the number of rows to print: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = 1; j <= 5; j++){
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
} */


/* 
    *
   ***
  *****
 *******
*********
    *
   ***
  *****
 *******
*********
    *
    *
    *
    *
    *
 */

/* #include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k, n;
    printf("Enter the number fo rows to print: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = 1; j <= (n-i) ; j++){
            printf(" ");
            }
            for(k = 1; k <= (2*i-1); k++){
                printf("*");
        }
        printf("\n");
    }
    for(i = 1; i <= n; i++){
        for(j = 1; j <= (n-i) ; j++){
            printf(" ");
            }
            for(k = 1; k <= (2*i-1); k++){
                printf("*");
        }
        printf("\n");
    }
    for(i = 1; i <= n; i++){
        for(j = 1; j <= (n-1) ; j++){
            printf(" ");
            }
            for(k = 1; k <= 1; k++){
                printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}
 */



// C program to print animated christmas tree

/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define REFRESH_RATE 400000
#define RANDOMNESS_LEVEL 5 // Higher value means less randomness

// Clear the console screen (cross-platform)
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Print a random leaf character with preference to '*'
void printLeaf() {
    char leafTypes[5] = { '.', '*', '+', 'o', 'O' };
    int randomValue = rand() % RANDOMNESS_LEVEL;

    // Prefer '*' but occasionally choose other characters
    if (randomValue == 0)
        printf("%c ", leafTypes[rand() % 5]);
    else
        printf("* ");
}

// Draw a triangular section of the tree
void drawTriangle(int startRow, int endRow, int totalHeight) {
    int spaces = 2 * totalHeight - 2;

    // Adjust initial spaces for the triangle
    spaces -= (startRow - 1);

    for (int i = startRow - 1; i < endRow; i++) {
        // Print leading spaces
        for (int j = 0; j < spaces; j++)
            printf(" ");
        spaces--;

        // Print leaves
        for (int j = 0; j <= i; j++)
            printLeaf();

        printf("\n");
    }
}

// Print the entire tree
void drawTree(int height) {
    int startRow = 1, endRow = 0, rowIncrement = 3;

    while (endRow < height + 1) {
        endRow = startRow + rowIncrement;
        drawTriangle(startRow, endRow, height);
        rowIncrement++;
        startRow = endRow - 2;
    }
}

// Print the trunk of the tree
void drawTrunk(int height) {
    int spaces = 2 * height - 4;

    for (int i = 1; i <= 4; i++) {
      
        // Print leading spaces
        for (int j = 0; j < spaces; j++)
            printf(" ");

        // Print trunk
        for (int j = 1; j <= 6; j++)
            printf("#");

        printf("\n");
    }
}

// Main function
int main() {
    srand(time(NULL));
    int treeHeight = 6;

    // Refresh loop
    while (1) {
        clearScreen();
          printf("\n********* MERRY CHRISTMAS *********\n\n");
        drawTree(treeHeight);
        drawTrunk(treeHeight);
        usleep(REFRESH_RATE);
    }

    return 0;
} */




/* 
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
 */

/* #include<stdio.h>
#include<conio.h>

int main() 
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i<= n; i++){
        for(j= 1; j <= 5; j++){
            printf("%d", i);
        }
        printf("\n");
    }
    getch();
    return 0;
} */


/* 
A
A B
A B C
A B C D
 */


/* 
#include<stdio.h>
#include<conio.h>

int main(){
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0;i <=n; i++){
        for(j = 0;j< i; j++){
            printf("%c",'A' + j ); // Concept of ASCII value is used
        }
        printf("\n");
    }
    return 0;
}

 */

// Print ASCII value of any character

/* #include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 'A';
    printf("The ASCII value of %c is %d", ch, ch);
    return 0;
} */



/*
Output:
*****
*   *
*   *
*   *
*****
*/

/* #include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, n;
    printf("Enter the number of rows you want to print: ");
    scanf("%d", &n);

    for(i = 1 ; i <= n; i++){
        for(j = 1 ; j <= n; j++){
            if (i > 1 && i < n && j > 1 && j < n){
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");

    }
    getch();
    return 0;
} */


/* 

    *
   * *
  *   *
 *     *
  *   *
   * *
    *

*/

// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     int n = 4;

//     // Upper half
//     for (int i = 1; i <= n; i++) {
//         // Print leading spaces
//         for (int s = 1; s <= n-i; s++) {
//             printf(" ");
//         }
//         // print first star
//         printf("*");

//         // Print inner spaces and second star (except first row)
//         if (i > 1) {
//             for (int j = 1; j <= 2*i-3; j++) {
//                 printf(" ");
//             }
//             printf("*");
//         }
//         printf("\n");
//     }

//     // Lower Half
//     for (int i = n-1; i >=1; i--) {
//         // print leading spaces
//         for (int s = 1; s <= n-i; s++) {
//             printf(" ");
//         }

//         // Print first star
//         printf("*");

//         // Print inner spaces and second star
//         if (i > 1) {
//             for (int j = 1; j <= 2*i-3; j++) {
//                 printf(" ");
//             }
//             printf("*");
//         }
//         printf("\n");
//     }


//     return 0;
// }