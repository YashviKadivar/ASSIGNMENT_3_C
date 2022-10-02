/* write a program to check whether a given number is an even number or an odd number. */

#include<stdio.h>

int main()

{
    int a;

    printf("\n enter a number->");
    scanf("%d",&a);

        if(a%2==0)
        {
            printf("Even Number\n");
        }
        else
        {
            printf("Odd Number\n");
        }

    return 0;
}
