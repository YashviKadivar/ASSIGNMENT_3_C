/*  Write a program to check whether a given character is an alphabet (uppercase), an
    alphabet (lower case), a digit or a special character.  */

#include<stdio.h>

int main()
{
   char ch;

   printf("\n Enter a Character->");
   scanf("%c",&ch);

   if(ch>='a' && ch<='z')
        printf("\n Lowercase alphabet");
   else   if(ch>='A' && ch<='Z')
        printf("\n Uppercase alphabet");
   else    if(ch>='0' && ch<='9')
        printf("\n digit");
   else
        printf("\n special character");

   return 0;
}
