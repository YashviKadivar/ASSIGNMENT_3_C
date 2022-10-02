/* write a program to check whether a given number is an even number or an odd number without using % operator. */

#include<stdio.h>

int main()

{
    int a;

    printf("\n enter a number->");
    scanf("%d",&a);

        if(a&1==1)
        {
            printf("Odd Number\n");
        }
        else
        {
            printf("Even Number\n");
        }

    return 0;
}
