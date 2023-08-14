#include<stdio.h>
int main()
{
    //Program to check whether a character is uppercase or lowercase
    char c;
    printf("Enter a character:");
    scanf("%c", &c);
    if (c>='A' && c<='Z')
    {
        printf("%c is an uppercase",c);
    }
    else if (c>='a' && c<='z')
    {
        printf("%c is a lowercase",c);
    }
    else
    {
        printf("Incorrect character");
    }
    return 0;
}
