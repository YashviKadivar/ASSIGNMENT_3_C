/* Write a program to check whether a given year is a leap year or not. */

#include<stdio.h>

int main()
{
    int yr;

    printf("Enter a year : ");
    scanf("%d",&yr);

    if(yr%100==0)
        if(yr%400==0)
            printf("Leap year");
        else
            printf("Not Leap year");
    else
        if(yr%4==0)
            printf("Leap year");
        else
            printf("Not Leap year");


    return 0;
}
