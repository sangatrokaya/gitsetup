/* 1. a program to initialize character array at compile time */
// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//     char name1[] = {'R', 'a', 'm', '\0'};
//     char name2[] = "Khwopa";

//     printf("%s", name1);
//     printf("\n%s", name2);

//     getch();
// }


/* 2. a program to initilize an array at runtime */
// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//     int x[3];
//     printf("Initialize the array elements: \n");
//     scanf("%d%d%d", &x[0], &x[1], &x[2]);
//     getch();
// }


/* 3. program to illustrate I/O of elements of 1-D array */

// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//     float marks[5]; /* array declaration */
//     float age[] = {23, 19, 20, 21}; /* array initialization */
//     int i;
    
//     for(i = 0; i < 5; i++) {
//         printf("Index value for element to be entered is %d", i);
//         scanf("%f", &marks[i]); /* array elements input */
//     }
//     for(i = 0; i < 5; i++) {
//         printf("%f\n", marks[i]); /* array elements output */
//     }
//     printf("The initialized array is: \n");
//     for(i = 0; i < 4 ; i++){
//         printf("%f \t", age[i]); /* initialized array element output */
//     }

//     getch();
// }