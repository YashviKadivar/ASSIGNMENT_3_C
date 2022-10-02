/* Write a program to check whether a given number is divisible by 7 or divisible by 3. */

#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n%7==0 || n%3==0)
        printf("Divisible by 7 or 3\n");
    else
        printf("Not divisible by 7 or 3\n");

    return 0;
}
