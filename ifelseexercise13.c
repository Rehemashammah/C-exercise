#include <stdio.h>
int main()
{
    //Program to calculate profit or loss
    int x,y,z;
    printf("Enter the cost price:");
    scanf("%d", &x);
    printf("Enter the selling price:");
    scanf("%d",&y);
    if (y>x)
    {
        z=y-x;
        printf("Profit=%d",z);
    }
    else if (x>y)
    {
        z=x-y;
        printf("Loss=%d",z);
    }
    else
    {
        printf("No profit no loss");

    }
    return 0;
}
