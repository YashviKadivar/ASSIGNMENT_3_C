/* WRITE A PROGRAM to check whether a given number is positive or non-positive. */

#include<stdio.h>

int main()
{
    int a;

    printf("\n enter a number->");
    scanf("%d",&a);

        if(a>0)
        {
            printf("\n positive");
        }

        if(a<=0)
        {
            printf("\n non-positive");
        }

    return 0;
}
