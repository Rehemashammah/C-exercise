#include<stdio.h>
int main()
{
    //Program to find the number of days in a month
    int month;
    printf("Enter month number:");
    scanf("%d", &month);
    if ((month==1) || (month==3) || (month==5) || (month==7) || (month==8) ||
        (month==10) || (month==12))
    {
        printf("31 Days");
    }
        else if (month==2)
        {
            printf("28/29 days");

        }
        else if ((month==4) || (month==6) || (month==9) || (month==11))
        {
            printf("30 days");
        }
        return 0;

}
