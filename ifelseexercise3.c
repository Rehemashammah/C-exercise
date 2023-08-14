#include <stdio.h>
int main()
{
    //program to check whether a number is positive, negative or a zero
    int num;
    printf("Enter a float number:");
    scanf("%d", &num);
    if (num>0)
    {
        printf("%d is a positive number",num);
    }
    else if (num<0)
    {
        printf("%d is a negative number", num);
    }
    else
    {
        printf("%d is a zero",num);
    }
    return 0;
}
