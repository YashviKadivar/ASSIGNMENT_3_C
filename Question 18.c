/* Write a program which takes the month number as an input and display number of
days in that month  */

#include<stdio.h>

int main()
{
    int n;

    printf("Enter month number : ");
    scanf("%d",&n);

    if(n==1)
        printf("January");
    else if(n==2)
        printf("February");
    else if(n==3)
        printf("March");
    else if(n==4)
        printf("April");
    else if(n==5)
        printf("May");
    else if(n==6)
        printf("June");
    else if(n==7)
        printf("July");
    else if(n==8)
        printf("August");
    else if(n==9)
        printf("September");
    else if(n==10)
        printf("October");
    else if(n==11)
        printf("November");
    else if(n==12)
        printf("December");
    else
        printf("Invalid number");

    return 0;
}
