/* Write a program to print greater between two numbers. Print one number of both are
the same.   */

#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("%d is the greater\n",a);
    else if(b>a)
        printf("%d is the greater\n",b);
    else
        printf("Both are the same");

    return 0;
}
