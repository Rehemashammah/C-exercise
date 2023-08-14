#include<stdio.h>
int main()
{
    //Program to check whether a character is a digit, alphabet or special character
     char x;
     printf("Enter any character:");
     scanf("%c", &x);
     if ((x>='a' && x<='z') || (x>='A' && x<='Z' ))
     {
         printf("%c is an alphabet", x);
     }
     else if(x>='0' && x<='9')
     {
         printf("%c is a digit",x);
     }
     else
     {
         printf("%c is a special character",x);
     }
     return 0;
}
