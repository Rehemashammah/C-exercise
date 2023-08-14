#include <stdio.h>
int main()
{
    //program to find whether a character is an alphabet or not
    char cha;
    printf("Enter a character:");
    scanf("%c", &cha);
    if ((cha>='a') && (cha<='z') || (cha>='A') && (cha<='Z') )
    {

        printf("%c is a an alphabet", cha);

    }
    else
    {
        printf("%c is not an alphabet",cha);
    }
    return 0;
}
