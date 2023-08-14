#include<stdio.h>
int main()
{
    //Program to find whether a number is divisible by 5 or 11
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (!(num%5) && !(num%11))
    {


        printf("%d is divisible by both 5 and 11",num);
    }
    else
    {
        printf("%d is not divisible by both 5 and 11",num);
    }
    return 0;

}
