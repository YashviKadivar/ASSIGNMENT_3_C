/* 12. Write a program to check whether a given alphabet is in uppercase or lowercase.  */

#include<stdio.h>

int main()
{
    char alp;

    printf("Enter an alphabet : ");
    scanf("%c",&alp);

    if(alp>='A' && alp<='Z')
        printf("Uppercase");
    else if(alp>='a' && alp<='z')
        printf("Lowercase");

    return 0;
}
