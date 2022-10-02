/* 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.    */

#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n%3==0 && n%2==0)
        printf("Divisible by 2 and 3\n");
    else
        printf("Not divisible by 2 and 3\n");

    return 0;
}
