// sum of n numbers given by user
#include<stdio.h>

int main()
{
    int n, i, num, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("sum of %d numbers is %d", n, sum);
    return 0;

}