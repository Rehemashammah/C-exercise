#include<stdio.h>
int main()
{
    //Program to check leap year
    int year;
    printf("Enter a year:");
    scanf("%d", &year);
    if (((year%4==0) && (year%100!=0)) || (year%400==0))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is a normal year", year);
    }
    return 0;


}
