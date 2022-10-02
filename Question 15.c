/* Write a program to check whether a given number is positive, negative or zero.   */

#include<stdio.h>

int main()
{
    int n;

    printf("\n Enter a value->");
    scanf("%d",&n);

    if(n>0)
        printf("\n positive");
    else    if(n<0)
        printf("\n negative");
    else
        printf("\n zero");

    return 0;
}
