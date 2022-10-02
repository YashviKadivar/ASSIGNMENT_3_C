/* Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.    */

#include<stdio.h>

int main()
{
    int sp,cp;

    printf("Enter cost price : ");
    scanf("%d",&cp);

    printf("Enter selling price : ");
    scanf("%d",&sp);

    if(cp>sp)
        printf("%d %% Loss",((cp-sp)/sp)*100);
    else
        printf("%d %% Profit",((sp-cp)/cp)*100);

    return 0;
}
