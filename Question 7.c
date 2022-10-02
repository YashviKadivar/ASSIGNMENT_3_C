/* Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots. */

#include<stdio.h>

int main()
{
    int a,b,c,disc;

    printf("Enter a value of a,b,c->");
    scanf("%d%d%d",&a,&b,&c);

    disc=b*b-4*a*c;

        if(disc>0)
        {
            printf("Real & distinct");
        }
        else    if(disc<0)
        {
            printf("Imaginary");
        }
        else
        {
            printf("Real and Equal");
        }

    return 0;

}
